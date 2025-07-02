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
// 给这个类提供实现，并编写一个使用所有成员函数的小程序
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
// #include <iostream>
// #include "test-stock.h"

// const int STKS = 4;
// int main()
// {
//     Stock stocks[STKS] = {
//         Stock("NanoSmart", 12, 20.0),
//         Stock("Boffo Objects", 200, 2.0),
//         Stock("Monolithic Obelisks", 130, 3.25),
//         Stock("Fleep Enterprises", 60, 6.5)
//     };

//     std::cout << "Stock holdings:\n";
//     int st;
//     for (st = 0; st < STKS; st++)
//        std::cout << stocks[st] << std::endl;

//     const Stock *top = &stocks[0];
//     for (st = 1; st < STKS; st++)
//         top = &top->topval(stocks[st]);
//     std::cout << "\nMost valuable holding:\n";
//     std::cout << *top << std::endl;
//     return 0;
// }

// 4.请看下面程序清单10.10定义的Stack类的变量：
// typedef unsigned long Item;

// class Stack
// {
// private:
//     enum {MAX = 10};
//     Item * pitems;
//     int size;
//     int top;
// public:
//     Stack(int n = MAX);
//     Stack(const Stack &st);
//     ~Stack();
//     bool isempty() const;
//     bool isfull() const;
//     bool push(const Item &item);
//     bool pop(Item &item);
//     Stack &operator=(const Stack &st);
// };
// 正如私有成员表明的，这个类使用动态分配的数组来保存栈项。请
// 重新编写方法，以适应这种新的表示法，并编写一个程序来演示所有的
// 方法，包括复制构造函数和赋值运算符。
#include "test-stack.h"
#include <iostream>
int main()
{
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        // 判断字符是否为字母
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            cout << "Enter a PO number to add: ";
            cin >> po;
            if (st.isfull())
                cout << "Stack already full\n";
            else
                st.push(po);
            break;
        case 'P':
        case 'p':
            if (st.isempty())
                cout << "stack already empty\n";
            else
            {
                st.pop(po);
                cout << "PO #" << po << " popped\n";
            }
            break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    Stack st1(st);
    Stack st2 = st;
    while (st1.isempty() == false)
    {
        st1.pop(po);
        cout << "PO #" << po << " popped\n";
    }
    while (st2.isempty() == false)
    {
        st2.pop(po);
        cout << "PO #" << po << " popped\n";
    }
    cout << "Bye\n";
    return 0;
}