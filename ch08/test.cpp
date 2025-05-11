//编写通常接受一个参数（字符串的地址），并打印该字符串的函数。
//然而，如果提供了第二个参数（int类型），且该参数不为0，则该函数打印字符串的次数将为该函数被调用的次数（注意，字符串的打印次数不等于第二个参数的值，而等于函数被调用的次数）。
//是的，这是一个非常可笑的函数，但它让您能够使用本章介绍的一些技术。在一个简单的程序中使用该函数，以演示该函数是如何工作的。
// #include <iostream>

// void fun(char *s, int n = 0);
// int num = 0;
// int main()
// {
//     char *s = "jiege666";
//     int n = 0;
//     std::cout << "输入数字调用fun函数：";
//     while(std::cin >> n)   
//         fun(s, n);
//     return 0;
// }

// void fun(char *s, int n)
// {
//     num++;
//     if(n == 0) {
//         std::cout << s << std::endl;
//         return;
//     }
//     for(int i = num; i > 0; i--)
//         std::cout << s << std::endl;
// }


//CandyBar结构包含3个成员。第一个成员存储candy bar的品牌名称；
//第二个成员存储candy bar的重量（可能有小数）；
//第三个成员存储candy bar的热量（整数）。
//请编写一个程序，它使用一个这样的函数，即将CandyBar的引用、char指针、double和int作为参数，并用最后3个值设置相应的结构成员。
//最后3个参数的默认值分别为“MillenniumMunch”、2.85和350。
//另外，该程序还包含一个以CandyBar的引用为参数，并显示结构内容的函数。请尽可能使用const。

// #include <iostream>
// struct CandyBar
// {
//     char *name;
//     double weight;
//     int calorie;
// };
// void set(CandyBar &candy, char *name, double weight, int calorie);
// void show(const CandyBar &candy);

// int main()
// {
//     CandyBar candy;
//     char name[] = "MillenniumMunch";\
//     double weight = 2.85;
//     int calorie = 350;
//     set(candy, name, weight, calorie);
//     show(candy);
//     return 0;
// }

// void set(CandyBar &candy, char *name, double weight, int calorie)
// {
//     candy.name = name;
//     candy.weight = weight;
//     candy.calorie = calorie;
// }

// void show(const CandyBar &candy)
// {
//     std::cout << "name:" << candy.name << std::endl;
//     std::cout << "weight:" << candy.weight << std::endl;
//     std::cout << "calorie:" << candy.calorie << std::endl;
// }

//编写一个函数，它接受一个指向string对象的引用作为参数，并将该string对象的内容转换为大写，为此可使用表6.4描述的函数toupper()。
//然后编写一个程序，它通过使用一个循环让您能够用不同的输入来测试这个函数，该程序的运行情况如下：
//Enter a string(q to quit) : go away
//GO AWAY
//Next string (q to quit) : good grief!
//GOOD GRIEF!
//Next string(q to quit): q
//Bye

// #include <iostream>
// #include <cstdio>
// #include <string>
// using namespace std;
// void convert(string &str);
// int main()
// {
//     string str;
//     getline(cin, str);
//     while(str != "q")
//     {
//         for(int i = 0; i < str.length(); i++)
//             str[i] = toupper(str[i]);
//         cout << str << endl;
//         getline(cin, str);
//     }
//     cout << "Bye" << endl;

// }

//下面是一个程序框架:
// #include <iostream>
// using namespace std;
// #include <cstring>
// struct stringy{
//     char *str;
//     int ct;
// };

// int main()
// {
//     stringy beany;
//     char testing[] = "Reality isn't what it used to be.";
    
//     set(beany, testing);

//     show(beany);
//     show(beany, 2);
//     testing[0] = 'D';
//     testing[1] = 'u';
//     show(testing);
//     show(testing, 3);
//     show("Done!");
//     return 0;
// }

//请提供其中描述的函数和原型，从而完成该程序。
//注意，应有两个show( )函数，每个都使用默认参数。
//请尽可能使用cosnt参数。
//set( )使用new分配足够的空间来存储指定的字符串。
//这里使用的技术与设计和实现类时使用的相似。
//（可能还必须修改头文件的名称，删除using编译指令，这取决于所用的编译器。）


// #include <iostream>
// using namespace std;
// #include <cstring>
// struct stringy{
//     char *str;
//     int ct;
// };
// void set(stringy &beany, char *str);
// void show(const stringy &beany, int n = 1);
// void show(const char *str, int n = 1);
// int main()
// {
//     stringy beany;
//     char testing[] = "Reality isn't what it used to be.";
    
//     set(beany, testing);

//     show(beany);
//     show(beany, 2);
//     testing[0] = 'D';
//     testing[1] = 'u';
//     show(testing);
//     show(testing, 3);
//     show("Done!");
//     return 0;
// }
// void set(stringy &beany, char *str)
// {
//     beany.ct = strlen(str) + 1;
//     beany.str = new char[beany.ct];
//     strcpy(beany.str, str);

// }
// void show(const stringy &beany, int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         std::cout << beany.str[i];
//     }
//     std::cout << std::endl << "beany.ct = " << beany.ct << std::endl;
// }
// void show(const char *str, int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         std::cout << str[i];
//     }
//     std::cout << endl;
// }

// 编写模板函数max5( )，它将一个包含5个T类型元素的数组作为参数，并返回数组中最大的元素（由于长度固定，因此可以在循环中使用硬编码，而不必通过参数来传递）。
// 在一个程序中使用该函数，将T替换为一个包含5个int值的数组和一个包含5个dowble值的数组，以测试该函数。
// #include <iostream>

// template <typename T>
// T max5(T sum[5]);

// int main()
// {
//     int a[5] = {41, 3, 2, 21, 5};
//     double b[5] = {2.2, 3.8, 87.2, 24.4, 11.3};
//     std::cout << "int max: " << max5(a) << std::endl;
//     std::cout << "double max: " << max5(b) << std::endl;
//     return 0;
// }

// template <typename T>
// T max5(T sum[5])
// {
//     T temp = sum[0];
//     for(int i = 1; i < 5; i++)
//     {
//         if(sum[i] > temp) temp = sum[i];
//     }
//     return temp;
// }

// 编写模板函数maxn( )，它将由一个T类型元素组成的数组和一个表示数组元素数目的整数作为参数，并返回数组中最大的元素。
// 在程序对它进行测试，该程序使用一个包含6个int元素的数组和一个包含4个double元素的数组来调用该函数。
// 程序还包含一个具体化，它将char指针数组和数组中的指针数量作为参数，并返回最长的字符串的地址。
// 如果有多个这样的字符串，则返回其中第一个字符串的地址。
// 使用由5个字符串指针组成的数组来测试该具体化。
// #include <iostream>
// #include <cstring>
// template <typename T>
// T maxn(T sum[], int n);

// template <>
// const char *maxn<const char *>(const char *p[],int n);

// int main()
// {
//     int a[6] = {1, 2, 3, 4, 5, 6};
//     double b[4] = {1.22, 3.43, 5.28, 98.2};
//     std::cout << "int max:" << maxn(a, 6) << std::endl;
//     std::cout << "double max:" << maxn(b, 4) << std::endl;
    
//     const char *str[5];
//     str[0] = "jiege";
//     str[1] = "jiege666";
//     str[2] = "jie";
//     str[3] = "ge";
//     str[4] = "ge11";
//     //不能直接对maxn直接&，因为maxn(str, 5) 返回的是一个指针而不是一个变量
//     std::cout << "char *max:" << maxn(str, 5) << std::endl;
//     return 0;
// }

// template <typename T>
// T maxn(T sum[], int n)
// {
//     T temp = sum[0];
//     for(int i = 1; i < n; i++)
//         if(sum[i] > temp) temp = sum[i];
//     return temp;
// }

// template <>
// const char *maxn<const char *>(const char *p[], int n)
// {
//     const char *q = p[0];
//     for(int i = 1; i < n; i++)
//         if(strlen(p[i]) > strlen(q)) 
//         {
//             q = p[i];
//             std::cout << " 1" << std::endl;
//         }
//     return q;
// }


//修改程序清单 8.14，使其使用两个名为 SumArray()的模板函数来返回数组元素的总和，而不是显示数组的内容。
//程序应显示thing的总和以及所有debt的总和。
// #include <iostream>
// template <typename T>
// T ShowArray(T arr[], int n);

// template <typename T>
// T ShowArray(T *arr[], int n);

// struct debts
// {
//     char name[50];
//     double amount;
// };

// int main()
// {
//     using namespace std;
//     int things[6] = {13, 31, 103, 301, 310, 130};
//     struct debts mr_E[3] =
//     {
//         {"Ima Wolfe", 2400.0},
//         {"Ura Foxe", 1300.0},
//         {"Iby Stout", 1800.0}
//     };
//     double *pd[3];

//     for (int i = 0; i < 3; i++)
//         pd[i] = &mr_E[i].amount;
    
//     cout << "Listing Mr.E's things add:\n";
//     cout << ShowArray(things, 6) << endl;;
//     cout << "Listing Mr.E's debts add:\n";
//     cout << ShowArray(pd, 3) << endl;;
//     return 0;
// }

// template <typename T>
// T ShowArray(T arr[], int n)
// {
//     using namespace std;
//     T num = 0;
//     cout << "template A\n";
//     for (int i = 0; i < n; i++)
//         num += arr[i];
//     cout << endl;
//     return num;
// }
// //此时T为double
// template <typename T>
// T ShowArray(T *arr[], int n)
// {
//     using namespace std;
//     T num = 0;
//     cout << "template B\n";
//     for (int i = 0; i < n; i++)
//         num += *arr[i];
//     cout << endl;
//     return num;
// }

