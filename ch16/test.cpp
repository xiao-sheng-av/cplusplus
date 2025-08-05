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

// #include <iostream>
// #include <string>
// using namespace std;
// bool palindrome(string &s)
// {
//     auto i = s.begin();
//     auto j = s.end() - 1;
//     while (i < j)
//     {
//         while (i < j && !isalpha(*i)) i++;
//         while (i < j && !isalpha(*j)) j--;
//         if (tolower(*j) != tolower(*i)) return false;
//         i++;
//         j--;
//     }
//     return true;
// }

// int main()
// {
//     string s;
//     getline(cin, s);
//     if (palindrome(s))
//         cout << "是回文" << endl;
//     else
//         cout << "不是回文" << endl;
//     return true;
// }

// 3.修改程序清单16.3，使之从文件中读取单词。一种方案是，使
// 用vector<string>对象而不是string数组。这样便可以使用push_back( )将
// 数据文件中的单词复制到vector<string>对象中，并使用size( )来确定单
// 词列表的长度。由于程序应该每次从文件中读取一个单词，因此应使用
// 运算符>>而不是getline( )。文件中包含的单词应该用空格、制表符或换
// 行符分隔。

#include <iostream>
#include <string>
#include <cstring>
#include <ctime>
#include <cctype>
#include <vector>
#include <fstream>
using std::string;
const int NUM = 26;


int main()
{
    using std::cout;
    using std::cin;
    using std::tolower;
    using std::endl;
    std::srand(std::time(0));
    std::vector<string> wordlist;
    string temp;
    std::ifstream in;
    in.open("word.txt");
    while (in >> temp) wordlist.push_back(temp);
    char play;
    cout << "Will you play a word game? <y/n> ";
    cin >> play;
    //tolower将字母转为小写
    play == tolower(play);
    while (play == 'y')
    {
        string target = wordlist[std::rand() % NUM];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guese my secret word. It has " << length
             << " letters, and you guess\n"
             << "one letter at a time. You get " << guesses
             << " wrong gueesses.\n";
        cout << "Your word: " << attempt << endl;
        while (guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
            {
                cout << "You already guessed that. Try again.\n";
                continue;
            }
            int loc = target.find(letter);
            if (loc == string::npos)
            {
                cout << "Oh, bad guess!\n";
                --guesses;
                badchars += letter;
            }
            else 
            {
                cout << "Good guess!\n";
                attempt[loc] = letter;
                loc = target.find(letter, loc + 1);
                while (loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
            cout << "Your word: " << attempt << endl;
            if (attempt != target)
            {
                if (badchars.length() > 0)
                    cout << "Bad choices: " << badchars << endl;
                cout << guesses << " bad guesses left\n";
            }
        }
        if (guesses > 0)
            cout << "That's right!\n";
        else
            cout << "Sorry, the word is " << target << ".\n";
        cout << "Will you play another? <y/n>";
        cin >> play;
        play = tolower(play);
    }
    cout << "Bye\n";
    return 0;
}