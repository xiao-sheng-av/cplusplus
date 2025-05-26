#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
public:
    enum Mode {int_stone, int_pound, double_pound};
private:
    //表示每石（stone）等于 14 磅（pounds）
    enum {Lbs_per_stn = 14};
    //石
    int stone;
    //双精度浮点数类型变量 pds_left，表示剩余的磅数
    double pds_left;
    //磅
    double pounds;
    //模式
    Mode mode;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt(); 
    void set_mode(Mode m);
    ~Stonewt();
    friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
    Stonewt operator*(const Stonewt &s);
    Stonewt operator-(const Stonewt &s);
    Stonewt operator+(const Stonewt &s);

};

#endif