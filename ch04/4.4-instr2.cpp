#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    //getline( )成员函数在读取指定数目的字符或遇到换行符时停止读取。
    //getline丢弃换行符，get将换行符留在输入序列，cin.getline(name, ArSize) = cin.get(name, ArSize).get()
    cin.getline(name, ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}