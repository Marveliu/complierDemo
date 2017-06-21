Marvel语法介绍
========

### 语法要素

1. 保留字
   
        class, constructor, method, function, int, boolean, char, void,  
        static, field, if, else, while, return, true, false, null, this,

2. 标识符
    
        由字母或下划线开头, 后接任意任意个字母或数字或下划线

3. 常量

        int类型的常数规定都是正整数, 没有负整数, 但是可以在正整数前面加上负号, 这是对正整数取负值的一元运算表达式  
        String类型的常量是把一个字符串用一对双引号括起来, 与java和C里面的字符串一样  
        boolean类型的常量可以是true和false  
        常数null表示一个空引用, 实际上就是数值0 

4. 合法符号

        (   )   [   ]   ,   .   ;   =    +   -   *   /   &   |   ~   <   >   <=   >=   ==   

5. 注释

        与C语言和java一样, 支持两种注释形式, 单行注释//   和多行注释 /*  */  

### 程序结构设计

1. 面向对象程序设计

        class 类名
        {
            成员变量(field)声明 和 静态变量(static)声明	// 比如放在子程序声明之前

            子程序声明	// 子程序声明可以是构造函数声明(construtor), 静态函数声明(function)和方法声明(method)
        }

2. 子程序申明

        subroutine 类型 名称 (参数列表)
        {
            局部变量声明
            语句
        }

3. jack必须至少包含一个Main类, 而且在Main类中必须包含一个function void main() 函数

### 变量 
    
1. 变量分类

    - 静态变量
    - 局部变量
    - 成员变量
    - 参数变量

成员变量通过field关键字来声明，静态变量通过static来声明，在函数体的开始声明的变量是局部变量，在函数声明中声明的变量是参数变量。

2. 数据类型

    基本数据类型和对象类型
    1. int boolen char
    2. 创建一个指向该对象的引用
    3. 数组:内置类Array类声明的, 用Array声明的对象也是一个引用, 指向堆内存. 对数组的引用可以与传统的一样,不支持多维数组。
    
    ```
        Array arr;
        arr[3] = 4;
    ```

    4. 字符串：字符串是通过内置类String类来声明的, 同样, 用String声明的对象也是一个引用, 指向堆内存, 例如:
     ```
        String s;
        char c;
        s = String.new("hello, world!\n");
        c = s.charAt(4);
    ```

    5. Marvel是弱类型语言, 没有禁止不同类型之间的转换

### 词法分析器

词法分析器的主要任务是识别源程序中的单词(Token),并且可以进行代码块的着色。

输入程序
```
int main() { printf("Hello, world!\n"); return 0; }
```

输出格式
```
关键字 int  
标识符 main  
左圆括号 '('  
左花括号 '{'  
标识符 printf
左圆括号 '('  
字符串 "Hello, world!\n"  
右圆括号 ')'  
分号 ';'  
标识符 return  
数字 0  
右花括号 '}'
```

转移图示例：
        
    