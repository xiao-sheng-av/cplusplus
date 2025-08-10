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
#include <fstream>
#include <iostream>
int main(int argc, char * argv[])
{
    if (argc < 2)
    {
        std::cout << "请输入指定文件路径" << std::endl;
    }
    std::string s, temp;
    while (!std::cin.eof() && std::cin >> temp) s = s + temp + '\n';
    std::ofstream f(argv[1]);
    f << s;
    return 0;
}