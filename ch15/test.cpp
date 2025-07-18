// 1.对Tv和Remote类做如下修改；
// a．让它们互为友元；
// b．在Remote类中添加一个状态变量成员，该成员描述遥控器是处
// 于常规模式还是互动模式；
// c．在Remote中添加一个显示模式的方法；
// d．在Tv类中添加一个对Remote中新成员进行切换的方法，该方法
// 应仅当TV处于打开状态时才能运行。
// #include <iostream>
// #include "test-tv.h"
// int main()
// {
//     Tv t1;
//     Remote r1;
//     r1.show_control();
//     t1.contro(r1);
//     t1.onoff();
//     t1.contro(r1);
//     r1.show_control();
//     return 0;
// }

// 2.修改程序清单15.11，使两种异常类型都是从头文件<stdexcept>
// 提供的logic_error类派生出来的类。让每个what( )方法都报告函数名和
// 问题的性质。异常对象不用存储错误的参数值，而只需支持what( )方
// 法。

// #include <iostream>
// #include <cmath>
// #include "test-exc_mean.h"

// double hmean(double a, double b);
// double gmean(double a, double b);
// int main()
// {
//     using std::cout;
//     using std::cin;
//     using std::endl;

//     double x, y, z;

//     cout << "Enter two numbers: ";
//     while (cin >> x >> y)
//     {
//         try {
//             z = hmean(x, y);
//             cout << "Harmonic mean of " << x << " and " << y
//                  << " is " << z << endl;
//             cout << "Geometric mean of " << x << " and " << y
//                  << " is " << gmean(x, y) << endl;
//             cout << "Enter next set of numbers <q to quit>: ";
//         }
//         catch (bad_hmean & bg)
//         {
//             bg.what();
//             cout << "Try again.\n";
//             continue;
//         }
//         catch (bad_gmean & hg)
//         {
//             hg.what();
//             cout << "Values used: " << hg.v1 << ", "
//                  << hg.v2 << endl;
//             cout << "Sorry, you don't get to play any more.\n";
//             break;
//         }
//     }
//     cout << "Bye!\n";
//     return 0;
// }

// double hmean(double a, double b)
// {
//     if (a == -b)
//         throw bad_hmean(a, b);
//     return 2.0 * a * b / (a + b);
// }

// double gmean(double a, double b)
// {
//     if ( a < 0 || b < 0)
//         throw bad_gmean(a, b);
//     return std::sqrt(a * b);
// }

// 3．这个练习与编程练习2相同，但异常类是从一个这样的基类派生
// 而来的：它是从logic_error派生而来的，并存储两个参数值。异常类应
// 该有一个这样的方法：报告这些值以及函数名。程序使用一个catch块来
// 捕获基类异常，其中任何一种从该基类异常派生而来的异常都将导致循
// 环结束。
// #include <iostream>
// #include <cmath>
// #include "test-exc_mean2.h"

// double hmean(double a, double b);
// double gmean(double a, double b);
// double bmean(double a, double b);
// int main()
// {
//     using std::cout;
//     using std::cin;
//     using std::endl;

//     double x, y, z;

//     cout << "Enter two numbers: ";
//     while (cin >> x >> y)
//     {
//         try {
//             z = hmean(x, y);
//             cout << "Harmonic mean of " << x << " and " << y
//                  << " is " << z << endl;
//             z = gmean(x, y);
//             cout << "Geometric mean of " << x << " and " << y
//                  << " is " << z << endl;
//             z = bmean(x, y);
//             cout << "Base mean of " << x << " and " << y
//                  << " is " << z << endl;
//             cout << "Enter next set of numbers <q to quit>: ";
//         }
//         catch (base & bg)
//         {
//             if (typeid(base) == typeid(bg))
//             {
//                 cout << bg.what() << endl;
//                 bg.show();
//             }
//             else 
//             {
//                 break;
//             }
//         }
//     }
//     cout << "Bye!\n";
//     return 0;
// }

// double hmean(double a, double b)
// {
//     if (a == -b)
//         throw bad_hmean(a, b);
//     return 2.0 * a * b / (a + b);
// }

// double gmean(double a, double b)
// {
//     if (a < 0 || b < 0)
//         throw bad_gmean(a, b);
//     return std::sqrt(a * b);
// }

// double bmean(double a, double b)
// {
//     if (a > b)
//         throw base(a, b);
//     return a + b;
// }

// 4.程序清单15.16在每个try后面都使用两个catch块，以确保
// nbad_index异常导致方法label_val( )被调用。请修改该程序，在每个try
// 块后面只使用一个catch块，并使用RTTI来确保合适时调用label_val( )。
#include <iostream>
#include "15.14-sales.h"

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double vals1[12] = 
    {
        1220, 1100, 1122, 2212, 1232, 2334,
        2884, 2393, 3302, 2922, 3002, 3544
    };

    double vals2[12] = 
    {
        12, 11, 22, 21, 32, 34,
        28, 29, 33, 20, 32, 35
    };

    Sales sales1(2011, vals1, 12);
    LabeledSales sales2("Blogstar", 2012, vals2, 12);

    cout << "First try block:\n";
    try
    {
        int i;
        cout << "Year = " << sales1.Year() << endl;
        for (i = 0; i < 12; ++i)
        {
            cout << sales1[i] << ' ';
            if (i % 6 == 5)
            cout << endl;
        }
        cout << "Year = " << sales2.Year() << endl;
        cout << "Label = " << sales2.Label() << endl;
        for (i = 0; i <= 12; ++i)
        {
            cout << sales2[i] << ' ';
            if (i % 6 == 5)
                cout << endl;
        }
        cout << "End of try block.\n";
    }
    catch(Sales::bad_index & bad)
    {
        if (typeid(Sales::bad_index) == typeid(bad))
        {
            cout << bad.what();
            cout << "bad index: " << bad.bi_val() << endl;
        }
        else if(typeid(LabeledSales::nbad_index) == typeid(bad))
        {
            cout << bad.what();
            cout << "Company: " << ((LabeledSales::nbad_index &)bad).label_val() << endl;
            cout << "bad index: " << bad.bi_val() << endl;
        }
    }
    cout << "\nNext try block:\n";
    try
    {
        sales2[2] = 37.5;
        sales1[20] = 23345;
        cout << "End of try block 2.\n";
    }
    catch(Sales::bad_index & bad)
    {
        if (typeid(Sales::bad_index) == typeid(bad))
        {
            cout << bad.what();
            cout << "bad index: " << bad.bi_val() << endl;
        }
        else if(typeid(LabeledSales::nbad_index) == typeid(bad))
        {
            cout << bad.what();
            cout << "Company: " << ((LabeledSales::nbad_index &)bad).label_val() << endl;
            cout << "bad index: " << bad.bi_val() << endl;
        }
    }
    cout << "done\n";

    return 0;
}