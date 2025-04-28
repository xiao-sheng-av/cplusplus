#include <iostream>
int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    //问题。输入year后不能再输入address，程序直接结束（混合输入数字和面向行的字符串会导致问题。）
    //原因：当cin读取年份，将回车键生成的换行符留在了输入队列中。
    //解决：在读取地址之前先读取并丢弃换行符。cin.get();
    cin >> year;
    cout << "What is its street address?\n";
    cin.get();
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Don!\n";
    return 0;
}