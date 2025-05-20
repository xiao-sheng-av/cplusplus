#include "test-4.h"
#include <iostream>
using namespace SALES;
Sales::Sales()
{
    sales[0] = 0;
    sales[1] = 1;
    sales[2] = 2;
    sales[3] = 0;
    max = 0;
    min = 0;
    average = 0;
}

Sales::Sales(const double ar[], int n)
{
    double temp = 0;
    if (n > 4)
        n = 4;
    for (int i = 0; i < n; i++)
        sales[i] = ar[i];

    for (int i = 0; i < n; i++)
        temp += sales[i];

    average = temp / n;

    temp = 0;
    for (int i = 0; i < n; i++)
        if (sales[i] > temp)
            temp = sales[i];

    max = temp;


    for (int i = 0; i < n; i++)
        if (sales[i] < temp)
            temp = sales[i];

    min = temp;
}

void Sales::setSales()
{
    int count = 0;
    double temp = 0;
    double s[4];
    for (; count < 4;)
    {
        std::cout << "请输入第" << count + 1 << "个数字：" << std::endl;
        if (std::cin >> s[count])
            count++;
        else
        {
            std::cin.clear();
            std::cin.get();
            continue;
        }
    }
    *this = Sales(s, count);
   
}

void Sales::showSales() const
{
    std::cout << "max: " << max << " min: " << min << " average: " << average << std::endl;
}