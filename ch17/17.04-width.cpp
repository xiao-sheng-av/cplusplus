#include <iostream>
int main()
{
    using std::cout;
    //设置并返回当前的width，并且设置后只用一次就恢复为默认值
    int w = cout.width(30);
    cout << "default field width = " << w << ":\n";
    cout.width(5);
    cout << "N" << ":";
    cout.width(8);
    cout << "N * N" << ":\n";

    for (long i = 1; i <= 100; i *= 10)
    {
        cout.width(5);
        cout << i << ':';
        cout.width(8);
        cout << i * i << ":\n";
    }

    return 0;
}