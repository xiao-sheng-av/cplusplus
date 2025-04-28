#include <iostream>
#include <string>
/**
 * 可以使用C-风格字符串来初始化string对象。
 * 可以使用cin来将键盘输入存储到string对象中。
 * 可以使用cout来显示string对象。
 * 可以使用数组表示法来访问存储在string对象中的字符。
 */
int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    //str1的声明创建一个长度为0的string对象，但程序将输入读取到str1中时，将自动调整str1的长度
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2 << endl;
    cout << "The third letter in " << charr2 << " is " 
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;

    return 0;
}