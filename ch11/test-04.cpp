#include "test-04.h"
#include <iostream>
Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator+(const Time &t1, const Time &t2)
{
    Time temp = Time(t1.hours + t2.hours + (t1.minutes + t2.minutes) / 60, (t1.minutes + t2.minutes) % 60);
    return temp;
}

Time operator-(const Time &t1, const Time &t2)
{
    int to1, to2;
    to1 = t1.hours * 60 + t1.minutes;
    to2 = t2.hours * 60 + t2.minutes;
    Time temp = Time((to1 - to2) / 60, (to1 - to2) % 60);
    return temp;
}

Time operator*(double m, const Time &t)
{
    int to1;
    to1 = t.hours * m * 60 + t.minutes * m;
    Time temp = Time(to1 / 60, to1 % 60);
    return temp;

}

Time operator*(const Time &t, double m)
{
    int to1;
    to1 = t.hours * m * 60 + t.minutes * m;
    Time temp = Time(to1 / 60, to1 % 60);
    return temp;
}

std::ostream &operator<<(std::ostream &os, const Time &t)
{
    os << t.hours << " hours " << t.minutes << " minutes ";
    return os;
}
