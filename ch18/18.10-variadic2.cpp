#include <iostream>
#include <string>

void show_list() {}

template <typename T>
void show_list(const T &value)
{
    std::cout << value << "\n";
}

template <typename T, typename... Args>
void show_list(const T &value, const Args &...args)
{
    std::cout << value << ", ";
    show_list(args...);
}

int main()
{
    int n = 14;
    double x = 2.71828;
    std::string mr = "Mr. String objects!";
    // 此时n为T value，x为可变参数内容
    show_list(n, x);
    // x * x为T value,剩下为可变参数内容
    show_list(x * x, '!', 7, mr);
    std::cout << std::endl;
    return 0;
}