#include "test-classic2.h"
#include <iostream>
Cd::Cd(const char *s1, const char *s2, const int n, const double x)
{
    performers = new char[strlen(s1) + 1];
    label = new char[strlen(s2) + 1];
    strcpy(performers, s1);
    strcpy(label, s2);  
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);  
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers = new char[strlen("null") + 1];
    label = new char[strlen("null") + 1];
    strcpy(performers, "null");
    strcpy(label, "null");  
    selections = 0;
    playtime = 0;
}

Cd::~Cd()
{
    std::cout << "bye!" << performers << "  " << label << std::endl;
    delete [] performers;
    delete [] label;
}

void Cd::Report() const
{
    std::cout << "perfirners: " << performers << "  label: " << label 
              << "  selections: " << selections << "  playtime: " << playtime << std::endl;
}

Cd &Cd::operator=(const Cd &d)
{
    if (&d == this)
        return *this;
    delete [] performers;
    delete [] label;
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);  
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}


Classic::Classic(const char *s0, const char * s1, const char * s2, const int n, const double x) : Cd(s1, s2, n, x)
{
    opus = new char[strlen(s0) + 1];
    strcpy(opus, s0);
}

void Classic::Report() const
{
    std::cout << "opus: " << opus;
    Cd::Report();
}

Classic &Classic::operator=(const Classic & c)
{
    if (&c == this)
        return *this;
    delete [] opus;
    Cd::operator=(c);
    opus = new char[strlen(c.opus) + 1];
    strcpy(opus, c.opus);
    return *this;
}

Classic::~Classic()
{
    std::cout << "bye!! " << opus << std::endl;
    delete [] opus;
}

