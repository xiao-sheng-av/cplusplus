#include <iostream>
using std::cout;
#include "test-06.h"

Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{

}

bool Stonewt::operator>(const Stonewt&s) const
{
     return pounds > s.pounds;
}

bool Stonewt::operator<(const Stonewt&s) const
{
    return pounds < s.pounds;
}

bool Stonewt::operator>=(const Stonewt&s) const
{
    return pounds >= s.pounds;
}

bool Stonewt::operator<=(const Stonewt&s) const
{
    return pounds <= s.pounds;
}

bool Stonewt::operator==(const Stonewt&s) const
{
    return pounds == s.pounds;
}

bool Stonewt::operator!=(const Stonewt&s) const
{
    return pounds != s.pounds;
}

std::ostream &operator<<(std::ostream &oc, const Stonewt &s)
{
    std::cout << "pounds = " << s.pounds;
    return oc;
}
