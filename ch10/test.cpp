//为复习题5描述的类提供方法定义，并编写一个小程序来演示所有的特性。
//5．定义一个类来表示银行帐户。数据成员包括储户姓名、账号
//（使用字符串）和存款。成员函数执行如下操作：
//创建一个对象并将其初始化；
//显示储户姓名、账号和存款；
//存入参数指定的存款；
//取出参数指定的款项。
//建立test-1.h和test-1.cpp完成
// #include "test-1.h"

// int main()
// {
//     Bank usr = Bank("jiege", "202215280102", 88888);
//     usr.show();
//     usr.put(11112);
//     usr.show();
//     usr.get(5000);
//     usr.show();
//     return 0;
// }
//
// 下面是一个非常简单的类定义：它使用了一个string对象和一个字符数组，让您能够比较它们的用法。
// class Person{
// private:
//     static const LIMIT = 25;
//     string lname;
//     char fname[LIMIT];
// public:
//     Person() {lname = ""; fname[0] = '\0'}
//     Person(const string &ln, const char *fn = "Heyyou");
//     void show() const;
//     void FormalShow() const;
// }
// 请提供未定义的方法的代码，以完成这个类的实现。
// 再编写一个使用这个类的程序，它使用了三种可能的构造函数调用（没有参数、一个参数和两个参数）以及两种显示方法。
// 下面是一个使用这些构造函数和
// 方法的例子：
// Person one;
// Person two("Smythecraft");
// Person three("Dimwiddy", "Sam");
// one.show();
// cout << endl;
// one.FormalShow();

// #include "test-2.h"
// #include <iostream>
// int main()
// {
//     Person one;
//     Person two = Person("Smythecraft");
//     Person three("Dimwiddy", "Sam");
//     three.show();
//     std::cout << endl;
//     three.FormalShow();
//     return 0;
// }

// 完成第9章的编程练习1，但要用正确的golf类声明替换那里的代码。
// 用带合适参数的构造函数替换setgolf（golf &, const char *, int），以提供初始值。
// 保留setgolf( )的交互版本，但要用构造函数来实现它（例如，setgolf( )的代码应该获得数据，将数据传递给构造函数来创建一个临时对象，并将其赋给调用对象，即*this）。
#include <iostream>
#include "test-3.h"

int main()
{
    golf jiege;
    jiege.showgolf();
    jiege.setgolf();
    jiege.showgolf();

    golf jie = golf("jie", 2);
    jie.showgolf();
    return 0;
}
