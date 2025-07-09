#include "test-classic.h"
#include <iostream>
Cd::Cd(const char *s1, const char *s2, const int n, const double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);  
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);  
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    strcpy(performers, "null");
    strcpy(label, "null");  
    selections = 0;
    playtime = 0;
}

Cd::~Cd()
{
    std::cout << "bye!" << performers << "  " << label << std::endl;
}

void Cd::Report() const
{
    std::cout << "perfirners: " << performers << "  label: " << label 
              << "  selections: " << selections << "  playtime: " << playtime << std::endl;
}

Cd &Cd::operator=(const Cd &d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);  
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}


Classic::Classic(const char *s0, const char * s1, const char * s2, const int n, const double x) : Cd(s1, s2, n, x)
{
    strcpy(opus, s0);
}

void Classic::Report() const
{
    std::cout << "opus: " << opus;
    Cd::Report();
}

Classic &Classic::operator=(const Classic & c)
{
    Cd::operator=(c);
    strcpy(opus, c.opus);
}