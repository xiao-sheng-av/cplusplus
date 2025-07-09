// 1.以下面的类声明为基础：
// class Cd {
// private:
//     char performers[50];
//     char label[20];
//     int selections;
//     double playtime;
// public:
//     Cd(char * s1, char * s2, int n, double x);
//     Cd(const Cd & d);
//     Cd();
//     ~Cd();
//     void Report() const;
//     Cd & operator=(const Cd & d);
// };
// 派生出一个classic类，并添加一组char成员，用于存储指出CD中主要作品的字符串。
// 修改上述声明，使基类的所有函数都是虚的。
// 如果上述定义的某个方法并不需要，则请删除它。
// 使用下面的程序测试您的产品：
#include <iostream>
using namespace std;
#include "test-classic.h"
void Bravo(const Cd & disk);
int main()
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
                    "Alfred Brendel", "Philips", 2, 57.17);

    Cd *pcd = &c1;
    
    cout << "Using object directly:\n";
    c1.Report();
    c2.Report();

    cout << "Using type cd * pointer to objects:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report();

    cout << "Calling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);

    cout << "Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

void Bravo(const Cd & disk)
{
    disk.Report();
}
