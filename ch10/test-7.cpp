#include "test-7.h"
#include <iostream>
#include <string.h>
plorg::plorg(const char *s,const int n)
{
    for (int i = 0; i < Max - 1; i++)
        name[i] = s[i];
    name[Max - 1] = '\0';
    CI = n;
}

void plorg::set_CI(const int n)
{
    CI = n;
}

void plorg::show() const
{
    std::cout << "name: " << name << "  CI: " << CI << std::endl;
}