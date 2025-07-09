#ifndef CLASSIC_H_
#define CLASSIC_H_
#include <cstring>
class Cd
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;

public:
    Cd(const char *s1, const char *s2, const int n, const double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd &operator=(const Cd &d);
};
// 派生出一个classic类，并添加一组char成员，用于存储指出CD中主要作品的字符串。
// 修改上述声明，使基类的所有函数都是虚的。
// 如果上述定义的某个方法并不需要，则请删除它。
// 使用下面的程序测试您的产品：

class Classic : public Cd
{
private:
    char opus[50];
public:
    Classic(const char * s0 = "null") : Cd() { strcpy(opus, s0); }
    Classic(const char *s0, const char * s1, const char * s2, const int n, const double x);
    void Report() const;
    Classic &operator=(const Classic & c);
};
#endif