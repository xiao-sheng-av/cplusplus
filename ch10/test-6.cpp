#include "test-6.h"
#include <iostream>
Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "x = " << x << "  y = " << y << std::endl;
}

Move Move::add(const Move &m) const
{
    Move usr = Move(this->x + m.x, this->y + m.y);
    return usr;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}