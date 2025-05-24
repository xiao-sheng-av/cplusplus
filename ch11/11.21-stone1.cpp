#include <iostream>
#include "11.19-stonewt1.h"

int main()
{
    using std::cout;
    Stonewt poppins(9, 2.8);
    double p_wt = poppins;
    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    //如果是 cout << "Poppins: " << poppins << " pounds.\n";则会产生二义性错误，编译器不知道选择转为double还是int。如果只有一个转换函数则不会
    cout << "Poppins: " << int (poppins) << " pounds.\n";
    return 0;
}