#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    //设置为左对齐
    cout.setf(ios_base::left, ios_base::adjustfield);
    //整数前面显示+
    cout.setf(ios_base::showpos);
    //显示0
    cout.setf(ios_base::showpoint);
    cout.precision(3);
    //使用科学计数法
    ios_base::fmtflags old = cout.setf(ios_base::scientific,
        ios_base::floatfield);
    cout << "Left Justification:\n";
    long n;
    for (n = 1; n < 41; n += 10)
    {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }
    //符号或基数前缀左对齐，值右对齐
    cout.setf(ios_base::internal, ios_base::adjustfield);
    cout.setf(old, ios_base::floatfield);
    cout << "Internal Justification:\n";
    for (n = 1; n <= 41; n += 10)
    {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }
    //右对齐
    cout.setf(ios::right, ios_base::adjustfield);
    //定点计数法
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Right Justification:\n";
    for (n = 1; n <= 41; n += 10)
    {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }
    return 0;
}