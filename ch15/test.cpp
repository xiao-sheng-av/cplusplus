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

#include <iostream>
#include <cmath>
#include "test-exc_mean.h"

double hmean(double a, double b);
double gmean(double a, double b);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try {
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y
                 << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                 << " is " << gmean(x, y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }
        catch (bad_hmean & bg)
        {
            bg.what();
            cout << "Try again.\n";
            continue;
        }
        catch (bad_gmean & hg)
        {
            hg.what();
            cout << "Values used: " << hg.v1 << ", "
                 << hg.v2 << endl;
            cout << "Sorry, you don't get to play any more.\n";
            break;
        }
    }
    cout << "Bye!\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean(a, b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if ( a < 0 || b < 0)
        throw bad_gmean(a, b);
    return std::sqrt(a * b);
}