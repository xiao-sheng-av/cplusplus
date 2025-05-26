#include <iostream>
using std::cout;
#include "test-05.h"

Stonewt::Stonewt(double lbs)
{
    mode = int_stone;
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    mode = int_stone;
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
    mode = int_stone;
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{

}

void Stonewt::set_mode(Mode m)
{
    if(m == int_stone)
    {
        mode = int_stone;
    }
    else if(m == int_pound)
    {
        mode = int_pound;
    }
    else if(m == double_pound)
    {
        mode = double_pound;
    }
}

std::ostream &operator<<(std::ostream &os, const Stonewt &s)
{
    if(s.mode == Stonewt::int_stone)
    {
        os << "stone = " << s.stone << "\n";
    }
    else if(s.mode == Stonewt::int_pound)
    {
        os << "int pound = " << (int) s.pounds << "\n";
    }
    else if(s.mode == Stonewt::double_pound)
    {
        os << "double pound = " << s.pounds << "\n";
    }
    return os;
}

Stonewt Stonewt::operator*(const Stonewt &s)
{
    double p;
    p = pounds * s.pounds;
    Stonewt temp = Stonewt(p);
    return temp;
}

Stonewt Stonewt::operator-(const Stonewt &s)
{
    double p;
    p = pounds - s.pounds;
    Stonewt temp = Stonewt(p);
    return temp;
}

Stonewt Stonewt::operator+(const Stonewt &s)
{
    double p;
    p = pounds + s.pounds;
    Stonewt temp = Stonewt(p);
    return temp;
}

