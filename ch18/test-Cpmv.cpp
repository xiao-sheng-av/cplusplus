#include "test-Cpmv.h"
Cpmv::Cpmv()
{
    pi = new Info;
    std::cout << "默认构造" << std::endl;
}

Cpmv::Cpmv(std::string q, std::string z)
{
    pi = new Info;
    pi->qcode = q;
    pi->zcode = z;
    std::cout << "字符串构造" << std::endl;
}
Cpmv::Cpmv(const Cpmv &cp)
{
    pi = new Info;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    std::cout << "拷贝构造" << std::endl;
}

Cpmv::Cpmv(Cpmv &&mv)
{
    pi = mv.pi;
    mv.pi = nullptr;
    std::cout << "移动构造" << std::endl;
}

Cpmv::~Cpmv()
{
    delete pi;
}

Cpmv &Cpmv::operator=(const Cpmv &cp)
{
    if (&cp == this)
        return * this;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    std::cout << "拷贝赋值" << std::endl;
    return * this;
}

Cpmv &Cpmv::operator=(Cpmv &&mv)
{
    if (&mv == this)
        return * this;
    pi = mv.pi;
    mv.pi = nullptr;
    std::cout << "移动赋值" << std::endl;
    return * this;
}

Cpmv Cpmv::operator+(const Cpmv &obj) const
{
    Cpmv temp;
    temp.pi->qcode = pi->qcode + obj.pi->qcode;
    temp.pi->zcode = pi->zcode + obj.pi->zcode;
    std::cout << "重载+运算符" << std::endl;
    return temp;
}

void Cpmv::Display() const
{
    std::cout << "Display: " << std::endl;
    std::cout << "qcode : " << pi->qcode << std::endl;
    std::cout << "zcode : " << pi->zcode << std::endl;
}