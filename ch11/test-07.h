#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
class complex
{
private:
    double imaginary;
    double real;
public:
    complex();
    complex(double r, double p);
    friend std::istream &operator>>(std::istream &oc, complex &num);
    friend std::ostream &operator<<(std::ostream &oc, const complex &num);
    complex operator+(const complex &num) const;
    complex operator-(const complex &num) const;
    complex operator*(const complex &num) const;
    complex operator~() const;
    friend complex operator*(double i, const complex &num);
};
#endif
