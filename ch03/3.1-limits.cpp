#include <iostream>
#include <climits>
int main()
{
    using namespace std;
    int n_int = INT_MAX;  //INT_MAX 的值是平台相关的，因此在不同平台（32 位与 64 位系统）上，int 的最大值可能不同。
    short n_short = SHRT_MAX; //同理
    long n_long = LONG_MAX;
    long long n_longlong = LONG_LONG_MAX;

    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof(short) << " bytes." << endl;
    cout << "long is " << sizeof(long) << " bytes." << endl;
    cout << "long long is " << sizeof(long long) << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_longlong << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    return 0;


}