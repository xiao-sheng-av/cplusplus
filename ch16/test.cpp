// 1.回文指的是顺读和逆读都一样的字符串。例如，“tot”和“otto”都
// 是简短的回文。编写一个程序，让用户输入字符串，并将字符串引用传
// 递给一个bool函数。如果字符串是回文，该函数将返回true，否则返回
// false。此时，不要担心诸如大小写、空格和标点符号这些复杂的问题。
// 即这个简单的版本将拒绝“Otto”和“Madam，I'm Adam”。请查看附录F中
// 的字符串方法列表，以简化这项任务。

#include <iostream>
#include <string>
using namespace std;
bool palindrome(string & s);
int main()
{
    string s;
    cin >> s;
    if (palindrome(s))
        cout << "是回文" << endl;
    else cout << "不是回文" << endl;
    return true;
}

bool palindrome(string & s)
{
    auto i = s.begin();
    auto j = s.end() - 1;
    for (; (i != j) && (i + 1 != j); i++, j--)
    {
        if (*i != *j) return false;
    }
    return true;
}
