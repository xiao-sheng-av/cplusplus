#ifndef CLASSIC_H_
#define CLASSIC_H_
#include <cstring>
class Cd
{
private:
    char *performers;
    char *label;
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

class Classic : public Cd
{
private:
    char *opus;
public:
    Classic(const char * s0 = "null") : Cd() { opus = new char[strlen(s0) + 1]; strcpy(opus, s0); }
    Classic(const char *s0, const char * s1, const char * s2, const int n, const double x);
    ~Classic();
    void Report() const;
    Classic &operator=(const Classic & c);

};
#endif