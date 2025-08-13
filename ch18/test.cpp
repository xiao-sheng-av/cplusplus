// 1．下面是一个简短程序的一部分：
// int main()
// {
//     using namespace std;
//     auto q = average_list({15.4, 10.7, 9.0});
//     cout << q << endl;

//     cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
//     auto ad = average_list<double>({'A', 70, 65.33});
//     cout << ad << endl;
//     return 0;
// }
// 请提供函数average_list( )，让该程序变得完整。它应该是一个模板
// 函数，其中的类型参数指定了用作函数参数的initilize_list模板的类型以
// 及函数的返回类型。
#include <iostream>
template <class T>
T average_list(std::initializer_list<T> n)
{
    int i = 0;
    double num = 0;
    for (auto j = n.begin(); j < n.end(); j++)
    {
        num += *j;
        i++;
    }
    return num / i;
}
int main()
{
    using namespace std;
    auto q = average_list({15.4, 10.7, 9.0});
    cout << q << endl;

    cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
    auto ad = average_list<double>({'A', 70, 65.33});
    cout << ad << endl;
    return 0;
}
