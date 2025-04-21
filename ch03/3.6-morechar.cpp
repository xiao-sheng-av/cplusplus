#include <iostream>

int main()
{
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "Add one to the character code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i  << endl;

    cout << "Displaying char ch using cout.put(ch): ";
    //put是一个成员函数，例如类ostream有一个put( )成员函数，这里通过对象cout使用该成员函数，必须用句点将对象名和函数名称连接起来
    //句点被称为成员运算符。cout.put( )的意思是，通过类对象cout来使用函数put( )。
    cout.put(ch);  //cout.put(char) 展示char这个字符

    //使用cout.put()去展示一个字符常量
    cout.put('!');

    cout << endl << "Done" << endl;
    return 0;
}