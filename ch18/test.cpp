// 1．下面是一个简短程序的一部分：
// int main()
// {
//     using namespace std;
//     auto q = average_list({15.4, 10.7, 9.0});
//     cout << q << endl;

//     cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
//     auto ad = average_list<double>({'A', 70, 65.33});
//     cout << ad << endl;
//     return 0;
// }
// 请提供函数average_list( )，让该程序变得完整。它应该是一个模板
// 函数，其中的类型参数指定了用作函数参数的initilize_list模板的类型以
// 及函数的返回类型。
// #include <iostream>
// template <class T>
// T average_list(std::initializer_list<T> n)
// {
//     int i = 0;
//     double num = 0;
//     for (auto j = n.begin(); j < n.end(); j++)
//     {
//         num += *j;
//         i++;
//     }
//     return num / i;
// }
// int main()
// {
//     using namespace std;
//     auto q = average_list({15.4, 10.7, 9.0});
//     cout << q << endl;

//     cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
//     auto ad = average_list<double>({'A', 70, 65.33});
//     cout << ad << endl;
//     return 0;
// }

// 2．下面是类Cpmv的声明：
// class Cpmv
// {
// public:
//     struct Info
//     {
//         std::string qcode;
//         std::string zcode;
//     };
// private:
//     Info * pi;
// public:
//     Cpmv();
//     Cpmvb(std::string q, std::string z);
//     Cpmv(const Cpmv & cp);
//     Cpmv(Cpmv && mv);
//     ~Cpmv();
//     Cpmv & operator=(const Cpmv & cp);
//     Cpmv & operator=(Cpmv && mv);
//     Cpmv operator+(const Cpmv & obj) const;
//     void Display() const;
// };
// 函数operator+ ( )应创建一个对象，其成员qcode和zcode由操作数的
// 相应成员拼接而成。请提供为移动构造函数和移动赋值运算符实现移动
// 语义的代码。编写一个使用所有这些方法的程序。为方便测试，让各个
// 方法都显示特定的内容，以便知道它们被调用。
#include <iostream>
#include "test-Cpmv.h"
int main()
{
    Cpmv c1;
    Cpmv c2("jie", "shen");
    Cpmv c3(c2);
    Cpmv c4(c3 + c2);
    std::cout << "演示拷贝赋值" << std::endl;
    c1 = c2;
    c1.Display();
    std::cout << "演示移动赋值" << std::endl;
    c1 = c2 + c4;
    c1.Display();
    return 0;
}
