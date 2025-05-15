#include "test-golof.h"
#include <string.h>
#include <iostream>
void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    char name[100];
    int hc = 0;
    std::cout << "请输入姓名：";
    std::cin.getline(g.fullname, Len);
    if(!strlen(g.fullname)) return 0;
    std::cout << std::endl << "请输入等级：";
    std::cin >> hc;
    while(std::cin.fail()){
        std::cin.clear();
        while(std::cin.get());
        std::cout << std::endl << "请输入有效数字：";
        std::cin >> hc;
    }
    std::cin.get();
    g.handicap = hc;
    return 1;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    std::cout << "name:" << g.fullname << "  hc:" << g.handicap << std::endl;
}