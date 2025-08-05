// 1.回文指的是顺读和逆读都一样的字符串。例如，“tot”和“otto”都
// 是简短的回文。编写一个程序，让用户输入字符串，并将字符串引用传
// 递给一个bool函数。如果字符串是回文，该函数将返回true，否则返回
// false。此时，不要担心诸如大小写、空格和标点符号这些复杂的问题。
// 即这个简单的版本将拒绝“Otto”和“Madam，I'm Adam”。请查看附录F中
// 的字符串方法列表，以简化这项任务。

// #include <iostream>
// #include <string>
// using namespace std;
// bool palindrome(string & s);
// int main()
// {
//     string s;
//     cin >> s;
//     if (palindrome(s))
//         cout << "是回文" << endl;
//     else cout << "不是回文" << endl;
//     return true;
// }

// bool palindrome(string & s)
// {
//     auto i = s.begin();
//     auto j = s.end() - 1;
//     for (; (i != j) && (i + 1 != j); i++, j--)
//     {
//         if (*i != *j) return false;
//     }
//     return true;
// }

// 2.与编程练习1中给出的问题相同，但要考虑诸如大小写、空格和
// 标点符号这样的复杂问题。即“Madam，I'm Adam”将作为回文来测试。
// 例如，测试函数可能会将字符串缩略为“madamimadam”，然后测试倒过
// 来是否一样。不要忘了有用的cctype库，您可能从中找到几个有用的
// STL函数，尽管不一定非要使用它们。

#include <iostream>
#include <string>
using namespace std;
bool palindrome(string &s)
{
    auto i = s.begin();
    auto j = s.end() - 1;
    while (i < j)
    {
        while (i < j && !isalpha(*i)) i++;
        while (i < j && !isalpha(*j)) j--;
        if (tolower(*j) != tolower(*i)) return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);
    if (palindrome(s))
        cout << "是回文" << endl;
    else
        cout << "不是回文" << endl;
    return true;
}