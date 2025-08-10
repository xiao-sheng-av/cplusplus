// 1．编写一个程序计算输入流中第一个$之前的字符数目，并将$留
// 在输入流中。
// #include <iostream>
// #include <cstring>
// int main()
// {
//     char s[50];
//     std::cin.get(s, 50, '$');
//     std::cout << std::strlen(s) << std::endl;
//     return 0;
// }

// 2.编写一个程序，将键盘输入（直到模拟的文件尾）复制到通过
// 命令行指定的文件中
// #include <fstream>
// #include <iostream>
// int main(int argc, char * argv[])
// {
//     if (argc < 2)
//     {
//         std::cout << "请输入指定文件路径" << std::endl;
//     }
//     std::string s, temp;
//     while (!std::cin.eof() && std::cin >> temp) s = s + temp + '\n';
//     std::ofstream f(argv[1]);
//     f << s;
//     return 0;
// }

// 3．编写一个程序，将一个文件复制到另一个文件中。让程序通过
// 命令行获取文件名。如果文件无法打开，程序将指出这一点。
// #include <iostream>
// #include <fstream>

// int main(int argc, char * argv[])
// {
//     if (argc < 3)
//     {
//         std::cout << "请输入两个文件路径：" << std::endl;
//     }
//     std::ifstream in(argv[1]);
//     std::ofstream out(argv[2]);
//     if (!in.is_open() && !out.is_open())
//     {
//         std::cout << "文件打开失败" << std::endl;
//     }
//     std::string s;
//     std::string temp;
//     while (!in.eof())
//     {
//         in >> temp;
//         s += temp + '\n';
//     }
//     out << s;
//     return 0;
// }

// 4．编写一个程序，它打开两个文本文件进行输入，打开一个文本
// 文件进行输出。该程序将两个输入文件中对应的行并接起来，并用空格
// 分隔，然后将结果写入到输出文件中。如果一个文件比另一个短，则将
// 较长文件中余下的几行直接复制到输出文件中。例如，假设第一个输入
// 文件的内容如下：
// eggs kites donuts
// balloons hammers
// stones
// 而第二个输入文件的内容如下：
// zero lassitude
// finance drama
// 则得到的文件内容将如下：
// eggs kites donuts zero lassitude
// balloons hammers finance drama
// stones;
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        std::cout << "请输入三个文件路径：" << std::endl;
    }
    std::ifstream in1(argv[1]);
    std::ifstream in2(argv[2]);
    std::ofstream out(argv[3]);
    if (!in1.is_open() && !in2.is_open() && !out.is_open())
    {
        std::cout << "文件打开失败" << std::endl;
    }
    std::string s, temp;
    while (!in1.eof() || !in2.eof())
    {
        if (getline(in1, temp))
        {
            s += temp;
            s += ' ';
        }
        if (getline(in2, temp))
            s += temp;
        s += '\n';
    }
    out << s;
    return 0;
}