//程序清单3.2演示了如何使用无符号类型，并说明了程序试图超越整型的限制时将产生的后果。最后，再看一看预处理器语句#define。

#include <iostream>
#define zero 0
#include <climits>

int main()
{
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl << "now ";
    sam = sam + 1;  //有符号型 32767 + 1 = -32768
    sue = sue + 1;
    cout << "Sam has " << sam <<  " dollars and sue has " << sue;
    cout << " dollars deposited.\nPoor sam!" << endl;
    sam = zero;
    sue = zero;
    cout << "Sam has " << sam << " dollars and sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Take $1 to each account." << endl << "now ";
    sam = sam - 1;  
    sue = sue - 1; //无符号型 0 - 1 = 65535
    cout << "Sam has " << sam << " dollars and sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky sue!" << endl;
    return 0;
}