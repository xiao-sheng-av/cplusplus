#include "test-SALES.h"
#include <iostream>
//
void SALES::setSales(Sales &s, const double ar[], int n)
{
    double temp = 0;
    if (n > 4)
        n = 4;
    for (int i = 0; i < n; i++)
        s.sales[i] = ar[i];

    temp = 0;
    for (int i = 0; i < n; i++)
        temp += s.sales[i];

    s.average = temp / n;

    temp = s.sales[0];
    for (int i = 1; i < n; i++)
        if (s.sales[i] > temp)
            temp = s.sales[i];

    s.max = temp;

    temp = s.sales[0];
    for (int i = 1; i < n; i++)
        if (s.sales[i] < temp)
            temp = s.sales[i];

    s.min = temp;
}
// 以交互的方式设置
void SALES::setSales(Sales &s)
{
    int count = 0;
    double temp = 0;
    for (int i = 0; i < 4; i++)
    {
        if (std::cin >> s.sales[i])
            count++;
        else
            break;
    }

    temp = 0;
    for (int i = 0; i < count; i++)
        temp += s.sales[i];

    s.average = temp / count;

    temp = s.sales[0];
    for (int i = 1; i < count; i++)
        if (s.sales[i] > temp)
            temp = s.sales[i];

    s.max = temp;

    temp = s.sales[0];
    for (int i = 1; i < count; i++)
        if (s.sales[i] < temp)
            temp = s.sales[i];

    s.min = temp;
}
void SALES::showSales(const Sales &s)
{
    std::cout << "max: " << s.max << " min: " << s.min << " average: " << s.average << std::endl;
}