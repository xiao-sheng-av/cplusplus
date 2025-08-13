#include <iostream>
#include <string>
//参数为空时运行这个函数，结束递归
void show_list3() {}

template<typename T, typename... Args>
void show_list3(T value, Args... args)
{
    std::cout << value << ", ";
    show_list3(args...);
}

int main()
{
    int n = 14;
    double x = 2.71828;
    std::string mr = "Mr. String objects!";
    //此时n为T value，x为可变参数内容
    show_list3(n, x);
    //x * x为T value,剩下为可变参数内容
    show_list3(x * x, '!', 7, mr);
    std::cout << std::endl;
    return 0;
}