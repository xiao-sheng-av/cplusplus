//根据test-golof.h
//注意到setgolf( )被重载，可以这样使用其第一个版本：
//golf ann;
//setgolf(ann, "Ann Birdfree", 24);
// 上述函数调用提供了存储在ann结构中的信息。
// 可以这样使用其第二个版本：
// golf andy;
// setglof(andy);
// 上述函数将提示用户输入姓名和等级，并将它们存储在andy结构中。
// 这个函数可以（但是不一定必须）在内部使用第一个版本。根据这个头文件，创建一个多文件程序。
// 其中的一个文件名为golf.cpp，它提供了与头文件中的原型匹配的函数定义；
// 另一个文件应包含main( )，并演示原型化函数的所有特性。
// 例如，包含一个让用户输入的循环，并使用输入的数据来填充一个由golf结构组成的数组，数组被填满或用户将高尔夫选手的姓名设置为空字符串时，循环将结束。
// main( )函数只使用头文件中原型化的函数来访问golf结构。
// #include <iostream>
// #include "test-golof.h"
// int main()
// {
//     golf ann;
//     golf b[5];
//     int ret = 1;
//     char temp[100];
//     setgolf(ann, "Ann Birdfree", 24);

//     for (int i = 0; i < 5 && ret; i++)
//         ret = setgolf(b[i]);
    
//     showgolf(ann);

//     for(int i = 0; i < 5; i++)
//         showgolf(b[i]);

//     return 0;
// }


// 修改程序清单9.9：用string对象代替字符数组。
// 这样，该程序将不再需要检查输入的字符串是否过长，同时可以将输入字符串同字符串""进行比较，以判断是否为空行。
// #include <iostream>
// #include <string>
// const int ArSize = 10;
// using namespace std;
// void strcount(const string str);
// int main()
// {
//     string input;
//     char next;
    
//     cout << "Enter a line:\n";
//     getline(cin, input);
//     while(input != "")
//     {
//         strcount(input);
//         cout << "Enter next lins (empty line to quit):\n";
//         getline(cin, input);
//     }
//     cout << "Bye\n";
//     return 0;
// }

// void strcount(const string str)
// {
//     using namespace std;
//     static int total = 0;
//     int count = 0;
//     cout << "\"" << str << "\" contains ";
//     while(str[count])
//         count++;
//     total += count;
//     cout << count << " characters\n";
//     cout << total << " characters total\n";
// }

// 下面是一个结构声明：
// struct chaff
// {
//     char dross[20];
//     int slag;
// };
// 编写一个程序，使用定位new运算符将一个包含两个这种结构的数组放在一个缓冲区中。
// 然后，给结构的成员赋值（对于char数组，使用函数strcpy( )），并使用一个循环来显示内容。
// 一种方法是像程序清单9.10那样将一个静态数组用作缓冲区；
// 另一种方法是使用常规new运算符来分配缓冲区。
// #include <iostream>
// #include <string.h>
// struct chaff
// {
//     char dross[20];
//     int slag;
// };
// const int BUF = 512;
// char buffer[BUF];
// void show(const chaff &chaff);
// int main()
// {
//     chaff *a = new (buffer) chaff[2];
//     strcpy(a[0].dross, "jiege666");
//     a[0].slag = 20;
//     strcpy(a[1].dross, "jiege");
//     a[1].slag = 10;
//     for (int i = 0; i < 2; i++)
//         show(a[i]);
//     return 0;
// }

// void show(const chaff &chaff)
// {
//     using namespace std;
//     cout << "dross: " << chaff.dross << "  slag: " << chaff.slag << endl;
// }

//请基于下面这个名称空间编写一个由3个文件组成的程序：
// namespace SALES
// {
//     const int QUARTERS = 4;
//     struct Sales
//     {
//         double sales[QUARTERS];
//         double average;
//         double max;
//         double min;
//     };
//     void setSales(Sales &s, const double ar[], int n);
//     void setSales(Sales &s);
//     void showSales(const Sales &s);
// }
// 第一个文件是一个头文件，其中包含名称空间；
// 第二个文件是一个源代码文件，它对这个名称空间进行扩展，以提供这三个函数的定义；
// 第三个文件声明两个Sales对象，并使用setSales( )的交互式版本为一个结构提供值，然后使用setSales( )的非交互式版本为另一个结构提供值。
// 另外它还使用showSales( )来显示这两个结构的内容。
#include <iostream>
#include "test-SALES.h"

int main()
{
    using namespace SALES;
    Sales x, y;
    const double ar[6] = {1.0, 28.3, 872.2, 896.2, 22.3, 98.2};
    setSales(x, ar, 3);

    std::cout << "设置y: " << std::endl;
    setSales(y);

    std::cout << "显示x" << std::endl;
    showSales(x);
    std::cout << "显示y" << std::endl;
    showSales(y);
    return 0;
}