// 为复习题5描述的类提供方法定义，并编写一个小程序来演示所有的特性。
// 5．定义一个类来表示银行帐户。数据成员包括储户姓名、账号
// （使用字符串）和存款。成员函数执行如下操作：
// 创建一个对象并将其初始化；
// 显示储户姓名、账号和存款；
// 存入参数指定的存款；
// 取出参数指定的款项。
// 建立test-1.h和test-1.cpp完成
//  #include "test-1.h"

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
// #include <iostream>
// #include "test-3.h"

// int main()
// {
//     golf jiege;
//     jiege.showgolf();
//     jiege.setgolf();
//     jiege.showgolf();

//     golf jie = golf("jie", 2);
//     jie.showgolf();
//     return 0;
// }

// 完成第9章的编程练习4，但将Sales结构及相关的函数转换为一个类及其方法。
// 用构造函数替换setSales（sales &，double [ ]，int）函数。
// 用构造函数实现setSales（Sales &）方法的交互版本。
// 将类保留在名称空间SALES中。
// #include "test-4.h"
// int main()
// {
//     using namespace SALES;
//     double num[5] = {4, 9.3, 86.2, 86.1, 87};
//     Sales jie = Sales(num, 4);
//     jie.showSales();
//     jie.setSales();
//     jie.showSales();
//     return 0;
// }

// 考虑下面的结构声明：
// struct customer{
//     char fullname[35];
//     double payment;
// };
// 编写一个程序，它从栈中添加和删除customer结构（栈用Stack类声明表示）。
// 每次customer结构被删除时，其payment的值都被加入到总数中，并报告总数。
// 注意：应该可以直接使用Stack类而不作修改;
// 只需修改typedef声明，使Item的类型为customer，而不是unsigned long即可。

// #include "test-5.h"
// #include <iostream>
// int main()
// {
//     Stack jie = Stack();
//     customer u = {"jiegege", 23.4};
//     customer s;
//     if (jie.isfull())
//         std::cout << "栈已满" << std::endl;
//     else
//         jie.pop(u);

//     if (jie.isempty())
//         std::cout << "栈为空" << std::endl;
//     else
//         jie.push(s);

//     std::cout << s.fullname << "  " << s.payment << std::endl;
//     return 0;
// }

// 下面是一个类声明：
// class Move
// {
// private:
//     double x;
//     double y;
// public:
//     Move(double a = 0, double b = 0);
//     showmove() const;
//     Move add(const Move &m) const;
//     reset(double a = 0, double b = 0);
// };
// 请提供成员函数的定义和测试这个类的程序。

// #include "test-6.h"
// int main()
// {
//     Move jiege = Move(4, 10);
//     Move jie(3, 8);
//     jiege.showmove();

//     Move temp = jiege.add(jie);
//     temp.showmove();

//     jiege.reset(0, 0);
//     jiege.showmove();
//     return 0;
// }


// Betelgeusean plorg有这些特征。
// 数据：
// plorg的名称不超过19个字符；
// plorg有满意指数（CI），这是一个整数。
// 操作：
// 新的plorg将有名称，其CI值为50；
// plorg的CI可以修改；
// plorg可以报告其名称和CI；
// plorg的默认名称为“Plorga”。
// 请编写一个Plorg类声明（包括数据成员和成员函数原型）来表示
// plorg，并编写成员函数的函数定义。然后编写一个小程序，以演示
// Plorg类的所有特性。

// #include "test-7.h"
// int main()
// {
//     plorg jie;
//     jie.show();

//     plorg jiege = plorg("abcdefghijklmnopqrstuvwxyz", 100);
//     jiege.show();
//     jiege.set_CI(88);
//     jiege.show();

//     return 0;
// }