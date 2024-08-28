## 定义常量

在 C 中，有两种简单的定义常量的方式：

使用 **#define** 预处理器： `#define` 可以在程序中定义一个常量，它在编译时会被替换为其对应的值。  
使用 **const** 关键字：`const` 关键字用于声明一个只读变量，即该变量的值不能在程序运行时修改。

### #define 预处理器

下面是使用 **#define** 预处理器定义常量的形式：

```c++
#define 常量名 常量值
```

下面的代码定义了一个名为 PI 的常量：

```c++
#define PI 3.14159
```

在程序中使用该常量时，编译器会将所有的 PI 替换为 3.14159。  
具体请看下面的实例：  
**实例**

```c++
#include <stdio.h>

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main() {
    int area;

    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);

    return 0;
}
```

当上面的代码被编译和执行时，它会产生下列结果：

```c++
value of area : 50
```

### const 关键字

您可以使用 **const** 前缀声明指定类型的常量，如下所示：

```c++
const 数据类型 常量名 = 常量值;
```

下面的代码定义了一个名为MAX_VALUE的常量：

```c++
const int MAX_VALUE = 100;  
```

在程序中使用该常量时，其值将始终为100，并且不能被修改。  
![定义常量](../../resources/pictures/c-const-2021-01-15.png)  
const 声明常量要在一个语句内完成：  
![声明常量](../../resources/pictures/c-const-2021-01-15-2.png)  
具体请看下面的实例：  
**实例**

```c++
#include <stdio.h>

int main() {
    const int  LENGTH = 10;
    const int  WIDTH  = 5;
    const char NEWLINE = '\n';
    int area;

    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);

    return 0;
}
```

当上面的代码被编译和执行时，它会产生下列结果：

```c++
value of area : 50
```

请注意，把常量定义为大写字母形式，是一个很好的编程习惯。

### #define 与 const 区别

`#define` 与 `const` 这两种方式都可以用来定义常量，选择哪种方式取决于具体的需求和编程习惯。通常情况下，建议使用 `const`
关键字来定义常量，因为它具有类型检查和作用域的优势，而 `#define` 仅进行简单的文本替换，可能会导致一些意外的问题。  
`#define` 预处理指令和 `const` 关键字在定义常量时有一些区别：

- 替换机制：`#define` 是进行简单的文本替换，而 `const` 是声明一个具有类型的常量。`#define`
  定义的常量在编译时会被直接替换为其对应的值，而 `const` 定义的常量在程序运行时会分配内存，并且具有类型信息。
- 类型检查：`#define` 不进行类型检查，因为它只是进行简单的文本替换。而 `const` 定义的常量具有类型信息，编译器可以对其进行类型检查。这可以帮助捕获一些潜在的类型错误。
- 作用域：`#define` 定义的常量没有作用域限制，它在定义之后的整个代码中都有效。而 `const` 定义的常量具有块级作用域，只在其定义所在的作用域内有效。
- 调试和符号表：使用 `#define` 定义的常量在符号表中不会有相应的条目，因为它只是进行文本替换。而使用 `const`
  定义的常量会在符号表中有相应的条目，有助于调试和可读性。