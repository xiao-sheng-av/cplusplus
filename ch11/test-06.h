#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
private:
    //表示每石（stone）等于 14 磅（pounds）
    enum {Lbs_per_stn = 14};
    //石
    int stone;
    //双精度浮点数类型变量 pds_left，表示剩余的磅数
    double pds_left;
    //磅
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt(); 
    ~Stonewt();
    bool operator>(const Stonewt&s) const;
    bool operator<(const Stonewt&s) const;
    bool operator>=(const Stonewt&s) const;
    bool operator<=(const Stonewt&s) const;
    bool operator==(const Stonewt&s) const;
    bool operator!=(const Stonewt&s) const;
    friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
};

#endif