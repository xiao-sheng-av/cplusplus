#include "test-cow.h"
#include <cstring>
#include <iostream>
Cow::Cow()
{
    strcpy(name, "Cow");
    hobby = new char [20];
    strcpy(hobby, "green grass");
    weight = 500;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
    strcpy(name, nm);
    hobby = new char [strlen(ho)+1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c)
{
    strcpy(name, c.name);
    hobby = new char [strlen(c.hobby)+1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete [] hobby;
    std::cout << name << " end " << std::endl;
}

Cow & Cow::operator=(const Cow &c)
{
    this->weight = c.weight;
    delete [] this->hobby;
    this->hobby = new char [strlen(c.hobby) + 1];
    strcpy(this->hobby, c.hobby);
    strcpy(this->name, c.name);
    return *this;
}

void Cow::ShowCow() const
{
    std::cout << "name: " << name << std::endl;
    std::cout << "hobby: " << hobby << std::endl;
    std::cout << "weight: " << weight << std::endl;
}