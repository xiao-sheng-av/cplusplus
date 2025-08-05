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

// #include <iostream>
// #include <string>
// #include <cstring>
// #include <ctime>
// #include <cctype>
// #include <vector>
// #include <fstream>
// using std::string;
// const int NUM = 26;

// int main()
// {
//     using std::cout;
//     using std::cin;
//     using std::tolower;
//     using std::endl;
//     std::srand(std::time(0));
//     std::vector<string> wordlist;
//     string temp;
//     std::ifstream in;
//     in.open("word.txt");
//     while (in >> temp) wordlist.push_back(temp);
//     char play;
//     cout << "Will you play a word game? <y/n> ";
//     cin >> play;
//     //tolower将字母转为小写
//     play == tolower(play);
//     while (play == 'y')
//     {
//         string target = wordlist[std::rand() % NUM];
//         int length = target.length();
//         string attempt(length, '-');
//         string badchars;
//         int guesses = 6;
//         cout << "Guese my secret word. It has " << length
//              << " letters, and you guess\n"
//              << "one letter at a time. You get " << guesses
//              << " wrong gueesses.\n";
//         cout << "Your word: " << attempt << endl;
//         while (guesses > 0 && attempt != target)
//         {
//             char letter;
//             cout << "Guess a letter: ";
//             cin >> letter;
//             if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
//             {
//                 cout << "You already guessed that. Try again.\n";
//                 continue;
//             }
//             int loc = target.find(letter);
//             if (loc == string::npos)
//             {
//                 cout << "Oh, bad guess!\n";
//                 --guesses;
//                 badchars += letter;
//             }
//             else
//             {
//                 cout << "Good guess!\n";
//                 attempt[loc] = letter;
//                 loc = target.find(letter, loc + 1);
//                 while (loc != string::npos)
//                 {
//                     attempt[loc] = letter;
//                     loc = target.find(letter, loc + 1);
//                 }
//             }
//             cout << "Your word: " << attempt << endl;
//             if (attempt != target)
//             {
//                 if (badchars.length() > 0)
//                     cout << "Bad choices: " << badchars << endl;
//                 cout << guesses << " bad guesses left\n";
//             }
//         }
//         if (guesses > 0)
//             cout << "That's right!\n";
//         else
//             cout << "Sorry, the word is " << target << ".\n";
//         cout << "Will you play another? <y/n>";
//         cin >> play;
//         play = tolower(play);
//     }
//     cout << "Bye\n";
//     return 0;
// }

// 4.编写一个具有老式风格接口的函数，其原型如下：
// int reduce(long ar[], int n);
// 实参应是数组名和数组中的元素个数。该函数对数组进行排序，删
// 除重复的值，返回缩减后数组中的元素数目。请使用STL函数编写该函
// 数（如果决定使用通用的unique( )函数，请注意它将返回结果区间的结
// 尾）。使用一个小程序测试该函数。

// #include <iostream>
// #include <algorithm>
// int reduce(long ar[], int n);
// int main()
// {
//     long a[5] = {20, 10, 10, 50, 40};
//     int number = reduce(a, 5);
//     for (int i = 0; i < number; i++)
//         std::cout << "a[" << i << "] = " << a[i] << std::endl;
//     return 0;
// }

// int reduce(long ar[], int n)
// {
//     std::sort(ar, ar + n);
//     long * a = std::unique(ar, ar + n);
//     return a - ar;
// }

// 5、问题与编程练习4相同，但要编写一个模板函数：
// template <class T>
// int reduce(T ar[], int n);
// 在一个使用long实例和string实例的小程序中测试该函数
// #include <iostream>
// #include <algorithm>
// template <class T>
// int reduce(T arp[], int n);

// int main()
// {
//     long a[5] = {20, 10, 10, 50, 40};
//     std::string s[5] = {"jiege", "jie", "jiejiejie", "jie", "gege"};
//     int number = reduce(a, 5);
//     for (int i = 0; i < number; i++)
//         std::cout << "a[" << i << "] = " << a[i] << std::endl;
//     number = reduce(s, s->size());
//     for (int i = 0; i < number; i++)
//         std::cout << "s[" << i << "] = " << s[i] << std::endl;
//     return 0;
// }

// template <class T>
// int reduce(T ar[], int n)
// {
//     std::sort(ar, ar + n);
//     T *a = std::unique(ar, ar + n);
//     return a - ar;
// }

// 6．使用STL queue模板类而不是第12章的Queue类，重新编写程序
// 清单12.12所示的示例。

#include <iostream>
#include <cstdlib>
#include <ctime>   
#include <queue>
#include "../ch12/12.10-queue.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x);
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;

    std::srand(std::time(0));  
    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    std::queue<Item> line;       
    cout << "Enter the number of simulation hours: ";
    int hours;              
    cin >> hours;

    long cyclelimit = MIN_PER_HR * hours;
    cout << "Enter the average number of customers per hour: ";
    double perhour;        
    cin >> perhour;
    double min_per_cust;   
    min_per_cust = MIN_PER_HR / perhour;
    Item temp;            
    long turnaways = 0;   
    long customers = 0;     
    long served = 0;     
    long sum_line = 0;   
    int wait_time = 0;     
    long line_wait = 0;    

    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))  
        {
            if (line.size() == qs)
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle);   
                line.push(temp); 
            }
        }
        if (wait_time <= 0 && !line.empty())
        {
            temp = line.front();   
            line.pop();  
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        sum_line += line.size();
    }

    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: "
             << (double) line_wait / served << " minutes\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done!\n";

    return 0;
}

bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1); 
}