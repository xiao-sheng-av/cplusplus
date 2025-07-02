// class Cow{
//     char name[20];
//     char *hobby;
//     double weight;
// public:
//     Cow();
//     Cow(const char *nm, const char *ho, double wt);
//     Cow(const Cow &c);
//     ~Cow();
//     Cow &operator=(const Cow &c);
//     void ShowCow() const;
// };
//给这个类提供实现，并编写一个使用所有成员函数的小程序
// #include "test-cow.h"
// #include <iostream>

// int main()
// {
//     Cow a;
//     a.ShowCow();
//     Cow b("jie", "grass", 200);
//     b.ShowCow();
//     a = b;
//     a.ShowCow();
//     Cow c(b);
//     c.ShowCow();
//     return true;
// }

// 2．通过完成下面的工作来改进String类声明（即将String1.h升级为
// String2.h）。
// a．对+运算符进行重载，使之可将两个字符串合并成1个。
// b．提供一个Stringlow( )成员函数，将字符串中所有的字母字符转
// 换为小写（别忘了cctype系列字符函数）。
// c．提供String( )成员函数，将字符串中所有字母字符转换成大写。
// d．提供一个这样的成员函数，它接受一个char参数，返回该字符
// 在字符串中出现的次数。
// 使用下面的程序来测试您的工作：
// #include <iostream>
// using namespace std;
// #include "test-string2.h"
// int main()
// {
//     String s1(" and I am a C++ student.");
//     String s2 = "Please enter your name: ";
//     String s3;
//     cout << s2;
//     cin >> s3;
//     s2 = "My name is " + s3;
//     cout << s2 << endl;
//     s2 = s2 + s1;
//     s2.Stringsuper();
//     cout << "The string\n" << s2 << "\ncibraubs " << s2.Stringcharcount('A')
//          << " 'A' characters in it.\n";
//     s1 = "red";
//     String rgb[3] = { String(s1), String("green"), String("blue")};
//     cout << "Enter the name of a primary color for mixing light: ";
//     String ans;
//     bool success = false;
//     while (cin >> ans)
//     {
//         ans.Stringlow();
//         for (int i = 0; i < 3; i++)
//         {
//             if (ans == rgb[i])
//             {
//                 cout << "That's right!\n";
//                 success = true;
//                 break;
//             }
//         }
//         if (success)
//             break;
//         else 
//             cout << "Try again\n";
//     }
//     cout << "Bye\n";
//     return 0;
// }

// 3.新编写程序清单10.7和程序清单10.8描述的Stock类，使之使用动态分配的内存，而不是string类对象来存储股票名称。
// 另外，使用重载的operator<<()定义代替show()成员函数。
// 再使用程序清单10.9测试新的定义程序。
#include <iostream>
#include "test-stock.h"

const int STKS = 4;
int main()
{
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };

    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++)
       std::cout << stocks[st] << std::endl;

    const Stock *top = &stocks[0];
    for (st = 1; st < STKS; st++)
        top = &top->topval(stocks[st]);
    std::cout << "\nMost valuable holding:\n";
    std::cout << *top << std::endl;
    return 0;
}