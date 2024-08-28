#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mysql/mysql.h>

// 定义CSV文件路径
#define CSV_FILE_PATH "/home/darren/Workspaces/CLion/c-case/resources/students.csv"

/**
 * 初始化并连接到MySQL数据库
 * @param db 数据库名称
 * @param user 数据库用户名
 * @param password 数据库用户密码
 * @param host 数据库主机地址
 * @return 返回数据库连接句柄，失败则返回NULL
 */
MYSQL *mysql_init_and_connect(const char *db, const char *user, const char *password, const char *host) {
    // 初始化MySQL连接对象
    MYSQL *conn = mysql_init(NULL);

    // 如果连接对象初始化失败
    if (!conn) {
        // 打印错误信息到标准错误流
        fprintf(stderr, "mysql_init failed: %s\n", mysql_error(conn));
        // 返回NULL，表示连接失败
        return NULL;
    }

    // 尝试与MySQL服务器建立连接
    if (!mysql_real_connect(conn, host, user, password, db, MYSQL_PORT, NULL, 0)) {
        // 如果连接失败，打印错误信息
        fprintf(stderr, "mysql_real_connect failed: %s\n", mysql_error(conn));
        // 关闭已经打开的数据库连接
        mysql_close(conn);
        // 返回NULL，表示连接失败
        return NULL;
    }

    // 返回成功的连接对象
    return conn;
}

/**
 * 创建学生信息数据表
 * @param conn 数据库连接句柄
 */
void create_table_student_info(MYSQL *conn) {
    // 创建学生信息表
    // 如果学生信息表不存在，则创建表
    // 学生信息表的结构如下：
    // - id: 学生编号，整型，自动递增，主键
    // - name: 学生姓名，长度为20的变长字符，非空
    // - age: 学生年龄，整型，非空
    // - gender: 学生性别，长度为2的变长字符，非空
    // - birthday: 出生日期，日期类型，非空
    // - class_id: 学生班级号，整型，非空
    // 表的注释为“学生信息表”
    const int result = mysql_query(conn, "create table if not exists student_info("
                                   "id       int auto_increment comment '学生编号' primary key,"
                                   "name     varchar(20) not null comment '学生姓名',"
                                   "age      int         not null comment '学生年龄',"
                                   "gender   varchar(2)  not null comment '学生性别',"
                                   "birthday date        not null comment '出生日期',"
                                   "class_id int         not null comment '学生班级号')"
                                   "comment '学生信息表'");
    // 检查结果是否为真，即创建表是否失败
    if (result) {
        // 输出错误信息到标准错误流
        // 解释：这里使用fprintf函数向标准错误输出流(stderr)打印创建表失败的错误信息，
        // 错误信息通过mysql_error函数获取，该函数返回MySQL对象(conn)中的错误描述。
        // 这一步是为了及时发现并了解创建表失败的原因，便于调试和错误追踪。
        fprintf(stderr, "Create table failed: %s\n", mysql_error(conn));
    }
}

/**
 * 从CSV文件中解析数据并插入到数据库
 * @param conn 数据库连接句柄
 */
void parse_csv_and_insert_data(MYSQL *conn) {
    // 打开CSV文件
    FILE *file = fopen(CSV_FILE_PATH, "r");
    if (!file) {
        perror("Error opening file");
        return;
    }

    char line[1024];
    // 读取文件第一行，跳过表头
    fgets(line, sizeof(line), file); // Skip the header line

    // 清空学生信息数据表
    if (mysql_query(conn, "truncate table student_info")) {
        fprintf(stderr, "Error truncating table: %s\n", mysql_error(conn));
    }

    // 遍历文件中的每一行
    while (fgets(line, sizeof(line), file)) {
        // 去除换行符
        char *line_break = strchr(line, '\n');
        if (line_break != NULL) {
            *line_break = '\0';
        }
        // 使用逗号分隔字段
        char *token = strtok(line, ",");
        if (token) {
            // 分配变量以存储CSV字段
            // Assuming CSV format: ID,Name,Age,Gender
            char *id_str = token;
            char *name = strtok(NULL, ",");
            char *age_str = strtok(NULL, ",");
            char *gender = strtok(NULL, ",");
            char *birthday = strtok(NULL, ",");
            char *class_id_str = strtok(NULL, ",");

            // 将编号字符串转换为整数
            const int id = atoi(id_str); // Convert age string to integer
            // 将年龄字符串转换为整数
            const int age = atoi(age_str); // Convert age string to integer
            // 将班级号字符串转换为整数
            const int class_id = atoi(class_id_str); // Convert age string to integer

            // 构造SQL插入语句
            // Prepare and execute the SQL statement
            char sql[512];
            sprintf(
                sql,
                "insert into student_info (id, name, age, gender, birthday, class_id) values (%d, '%s', %d, '%s', '%s', %d)",
                id, name, age, gender, birthday, class_id);

            // 执行SQL插入语句
            if (mysql_query(conn, sql)) {
                fprintf(stderr, "Insert data failed: %s\n", mysql_error(conn));
            }
        }
    }
    // 关闭CSV文件
    fclose(file);
}

/**
 * 查询并打印学生信息数据表中的所有数据
 * @param conn 数据库连接句柄
 */
void query_and_print_data(MYSQL *conn) {
    // 查询student_info表中的所有数据，并按id排序
    if (mysql_query(conn, "select * from student_info order by id")) {
        fprintf(stderr, "Query data failed: %s\n", mysql_error(conn));
    }
    // 根据查询结果集初始化一个MYSQL_RES结构体
    MYSQL_RES *res = mysql_use_result(conn);
    if (res) {
        // 获取查询结果的字段数量
        const unsigned int num_fields = mysql_num_fields(res);
        MYSQL_ROW row;
        // 遍历查询结果的每一行
        while ((row = mysql_fetch_row(res))) {
            for (unsigned int i = 0; i < num_fields; i++) {
                // 输出每个字段的值，每行数据以换行分隔
                if (i == num_fields - 1) {
                    printf("%s\n", row[i]);
                    break;
                }
                printf("%s\t", row[i]);
            }
        }
        // 释放查询结果集的内存
        mysql_free_result(res);
    } else {
        fprintf(stderr, "mysql_use_result failed: %s\n", mysql_error(conn));
    }
}

/**
 * 释放MySQL资源
 * @param conn 数据库连接句柄
 */
void free_resources(MYSQL *conn) {
    mysql_close(conn);
}

int main() {
    const char *db = "main";
    const char *user = "main";
    const char *password = "p@ssw0rd";
    const char *host = "127.0.0.1";
    printf("Current database info: database->%s, user->%s, password->%s, host->%s.\n", db, user, password, host);
    // 连接到MySQL数据库
    MYSQL *conn = mysql_init_and_connect(db, user, password, host);
    if (conn) {
        // 创建学生信息数据表
        create_table_student_info(conn);
        // 解析CSV文件并插入数据
        parse_csv_and_insert_data(conn);
        printf("Data insert into the main database completed.\n");
        // 查询并打印学生信息数据表中的所有数据
        query_and_print_data(conn);

        // 切换数据库和数据库用户
        db = "c_case";
        user = "root";
        password = "abc123";
        host = "localhost";
        printf("Current database info: database->%s, user->%s, password->%s, host->%s.\n", db, user, password, host);
        if (!mysql_change_user(conn, user, password, db)) {
            // 创建学生信息数据表
            create_table_student_info(conn);
            // 解析CSV文件并插入数据
            parse_csv_and_insert_data(conn);
            printf("Data insert into the c_case database completed.\n");
            // 查询并打印学生信息数据表中的所有数据
            query_and_print_data(conn);
        } else {
            fprintf(stderr, "mysql_change_user failed: %s\n", mysql_error(conn));
            printf("Change user failed.\n");
        }
        // 释放数据库资源
        free_resources(conn);
    } else {
        printf("Failed to connect to MySQL.\n");
    }

    return 0;
}
