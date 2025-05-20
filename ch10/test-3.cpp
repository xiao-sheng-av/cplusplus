#include "test-3.h"
#include <string.h>
#include <iostream>
golf::golf()
{
    strcpy(fullname, "name");
    handicap_f(0);
}
golf::golf(const char *name, int hc)
{
    strcpy(fullname, name);
    handicap_f(hc);
}

int golf::setgolf()
{
    char name[100];
    int hc = 0;
    std::cout << "请输入姓名：";
    std::cin.getline(name, Len);
    if(!strlen(name)) return 0;
    std::cout << std::endl << "请输入等级：";
    std::cin >> hc;
    while(!hc){
        std::cin.clear();
        while(std::cin.get() != '\n');
        std::cout << std::endl << "请输入有效数字：";
        std::cin >> hc;
    }
    std::cin.get();
    *this = golf(name, hc);
    return 1;
}

void golf::handicap_f(int hc)
{
    if(hc < 0) 
        handicap = 0;
    else 
        handicap = hc;
}

void golf::showgolf() const
{
    std::cout << "fullname: " << fullname << "  handicap: " << handicap << std::endl;
}