#include <iostream>
//浮点常量在默认情况下为double类型。
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    //整数 / 整数，得出结果为整数1
    cout << "Integer division : 9/5 = " << 9 / 5 << endl;
    //浮点数 / 浮点数，得出结果为浮点数
    cout << "Floating-point division: 9.0/5.0 = ";
    cout << 9.0 / 5.0 << endl;
    //浮点数 / 整数，得出结果为浮点数
    cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
    //整数 / 浮点数，得出结果为浮点数
    cout << "double constants: 1e7/9.0 = ";
    cout << 1e7 / 9.0 << endl;
    cout << "float constants: 1e7f/9.0f = ";
    cout << 1.e7f / 9.0f << endl;
    return 0;
}