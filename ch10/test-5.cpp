#include "test-5.h"
#include <iostream>

Stack::Stack()
{
    total = 0;
    top = 0;

}
bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == Max;
}

bool Stack::pop(const customer &u)
{
    if(top < Max)
    {
        usr[top++] = u;
        return true;
    }
    else
        return false;
}

bool Stack::push(customer &u)
{
    if(top > 0)
    {
        u = usr[--top];
        total += u.payment;
        std::cout << "当前总数：" << total << std::endl;
        return true;
    }
    else return false;
}