#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mysql/mysql.h>

// 定义CSV文件路径
#define CSV_FILE_PATH "resources/students.csv"

/**
 * 初始化并连接到MySQL数据库
 * @param db 数据库名称
 * @param user 数据库用户名
 * @param password 数据库用户密码
 * @param host 数据库主机地址
 * @return 返回数据库连接句柄，失败则返回NULL
 */
MYSQL* mysql_init_and_connect(const char* db, const char* user, const char* password, const char* host) {
    MYSQL* conn = mysql_init(NULL);
    if (!mysql_real_connect(conn, host, user, password, db, 0, NULL, 0)) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        mysql_close(conn);
        return NULL;
    }
    return conn;
}

/**
 * 释放MySQL资源
 * @param conn 数据库连接句柄
 */
void free_resources(MYSQL* conn) {
    mysql_close(conn);
}

/**
 * 从CSV文件中解析数据并插入到数据库
 * @param conn 数据库连接句柄
 */
void parse_csv_and_insert_data(MYSQL* conn) {
    // 打开CSV文件
    FILE* file = fopen(CSV_FILE_PATH, "r");
    if (!file) {
        perror("Error opening file");
        return;
    }

    char line[1024];
    // 读取文件第一行，跳过表头
    fgets(line, sizeof(line), file); // Skip the header line

    // 遍历文件中的每一行
    while (fgets(line, sizeof(line), file)) {
        // 使用逗号分隔字段
        char* token = strtok(line, ",");
        if (token) {
            // 分配变量以存储CSV字段
            // Assuming CSV format: ID,Name,Age,Gender
            char* id = token;
            char* name = strtok(NULL, ",");
            char* ageStr = strtok(NULL, ",");
            char* gender = strtok(NULL, ",");

            // 将年龄字符串转换为整数
            int age = atoi(ageStr); // Convert age string to integer

            // 构造SQL插入语句
            // Prepare and execute the SQL statement
            char sql[512];
            sprintf(sql, "INSERT INTO student_info (student_id, student_name, student_age, student_gender) VALUES ('%s', '%s', %d, '%s')",
                    id, name, age, gender);

            // 执行SQL插入语句
            if (mysql_query(conn, sql)) {
                fprintf(stderr, "%s\n", mysql_error(conn));
            }
        }
    }
    // 关闭CSV文件
    fclose(file);
}

int main() {
    // 连接到MySQL数据库
    MYSQL* conn = mysql_init_and_connect("mysql", "root", "abcd1234", "localhost");
    if (conn) {
        // 解析CSV文件并插入数据
        parse_csv_and_insert_data(conn);
        // 释放数据库资源
        free_resources(conn);
        printf("Data insertion completed.\n");
    } else {
        printf("Failed to connect to MySQL.\n");
    }
    return 0;
}
