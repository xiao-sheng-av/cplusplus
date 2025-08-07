#include <iostream>

int main()
{
    using std::cout;
    //默认情况c++是用空格填充字段未被使用的部分，可以用fill成员函数来改变
    //新的填充字符将一直有效，直到更改它为止。
    cout.fill('*');
    const char * staff[2] = { "Waldo Whipsnade", "Wilmarie Woper"};
    long bonus[2] = {900, 1350};

    for (int i = 0; i < 2; i++)
    {
        cout << staff[i] << ":$";
        cout.width(7);
        cout << bonus[i] << "\n";
    }
    return 0;
}