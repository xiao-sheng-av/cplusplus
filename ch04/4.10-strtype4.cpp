#include <iostream>
#include <string>
#include <cstring>
int main()
{
    using namespace std;
    char charr[20];
    string str;
    //此时charr未初始化，内容为未知的，所以strlen(charr)不一定为0
    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    //用户输入之前，str中的字符串长度为0。这是因为未被初始化的string对象的长度被自动设置为0。
    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    //从cin中获取字符串到str
    getline(cin, str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;

    return 0;
}