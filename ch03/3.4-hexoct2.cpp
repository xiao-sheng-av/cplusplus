#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; //cout以16进制来显示整数
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct; //在修改格式之前，原来的格式将一直有效。
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    return 0;
}