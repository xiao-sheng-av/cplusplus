#include "test-2.h"
#include <string.h>
#include <iostream>

Person::Person(const string &ln, const char *fn)
{
    std::cout << "两个参数的构造函数" << std::endl;
    lname = ln;
    strcpy(fname, fn);
}

void Person::show() const
{
    std::cout << "show显示:";
    std::cout << "lname: " << lname << "  fname: " << fname << std::endl;
}
void Person::FormalShow() const
{
    std::cout << "FormalShow显示:";
    std::cout << "lname: " << lname << "  fname: " << fname << std::endl;
}