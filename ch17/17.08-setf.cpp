#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    int temperature = 63;
    cout << "Today's water temperature: ";
    //ios_base::showpos在整数前面加上+
    cout.setf(ios_base::showpos);
    cout << temperature << endl;

    cout << "For our programming friens, that's\n";
    cout << std::hex << temperature << endl;
    //ios_base::uppercase对于输出，使用C++基数前缀（0，0x）
    cout.setf(ios_base::uppercase);
    //ios_base::showbase对于16进制输出，使用大写字母，E表示法
    cout.setf(ios_base::showbase);
    cout << "or\n";
    cout << temperature << endl;
    cout << "How " << true << "!  oops -- How ";
    //ios_base::boolalpha输入和输出bool值，可以为true或false
    cout.setf(ios_base::boolalpha);
    cout << true << "!\n";

    return 0;
}