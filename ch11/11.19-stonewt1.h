#ifndef STONEWT1_H_
#define STONEWT1_H_
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
    void show_lbs() const;
    void show_stn() const;
    //转换函数
    operator int() const;
    operator double() const;
};
#endif