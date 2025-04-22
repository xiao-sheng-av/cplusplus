#include <iostream>
int main()
{
    using namespace std;
    //float只保存前6位,float a = 2.3456789e+22f;输出为2.34568e+22,对存储的值进行四舍五入，保存前六位数
    //float a = 2.3456789e+22f;
    float a = 2.34e+22f;
    float b = a + 1.0f;
    cout << "a = " << a << endl;
    //2.34E+22是一个小数点左边有23位的数字。加上1，就是在第23位加1。但float类型只能表示数字中的前6位，因此修改第23位对这个值不会有任何影响。所以输出为0
    cout << "b - a = " << b - a << endl;
    return 0;
}