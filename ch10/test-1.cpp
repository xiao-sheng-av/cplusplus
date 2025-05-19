#include "test-1.h"
#include <string.h>
#include <iostream>
Bank::Bank()
{
    std::cout << "默认初始化" << std::endl;
    strcpy(name, "null");
    strcpy(account, "00000000");
    deposit = 0.0;
}

Bank::Bank(const char n[50], const char c[50], double num)
{
    std::cout << "初始化银行账户" << std::endl;
    strcpy(name, n);
    strcpy(account, c);
    deposit = num;
    std::cout << name << "初始化完成" << std::endl;
}

Bank::~Bank()
{
    std::cout << "Bye! " << name << std::endl; 
}

void Bank::show() const
{
    std::cout << "展示账户信息" << std::endl;
    std::cout << "账户: " << name << std::endl;
    std::cout << "账号: " << account << std::endl;
    std::cout << "存款：" << deposit << std::endl;
}

void Bank::put(const double num)
{
    std::cout << "当前存款：" << deposit << std::endl;
    deposit += num;
    std::cout << "存入存款：" << num << "  存入后存款" << deposit << std::endl;
}

void Bank::get(const double num)
{
    std::cout << "当前存款：" << deposit << std::endl;
    deposit -= num;
    std::cout << "取出存款：" << num << "  取出后存款" << deposit << std::endl;
}