#include <iostream>
#include <vector>
#include <array>
int main()
{
    using namespace std;
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
    vector<double> a2(4);

    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;

    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    //此操作是逐一复制数据到新内存
    a4 = a3;
    cout << "a1[2]: " << a1[2] << " at "  << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at "  << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at "  << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at "  << &a4[2] << endl;
    //a1[-2] 等效于 *（a1-2） = 20.2;找到a1指向的地方，向前移两个double元素，并将20.2存储到目的地。
    a1[-2] = 20.2;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    //array对象和数组存储在相同的内存区域（即栈）中，而vector对象存储在另一个区域（自由存储区或堆）中。
    return 0;
}
//vector和array对象的成员函数at():使用at()时，将在运行期间捕获非法索引，而程序默认将中断。