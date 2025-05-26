#include "test-07.h"

complex::complex()
{
    imaginary = real = 0;
}

complex::complex(double r, double p)
{
    real = r;
    imaginary = p;
}

std::istream &operator>>(std::istream &os, complex &num)
{
    std::cout << "real: ";
    if(!(os >> num.real))
        return os;

    std::cout << "imaginary: ";
    os >> num.imaginary;

    return os;
}

std::ostream &operator<<(std::ostream &os, const complex &num)
{
    os << "(" << num.real << ", " << num.imaginary << "i)\n";
}

complex complex::operator+(const complex &num) const
{
    complex temp = complex(real + num.real, imaginary + num.imaginary);
    return temp;
}   

complex complex::operator-(const complex &num) const
{
    complex temp = complex(real - num.real, imaginary - num.imaginary);
    return temp;
}

complex complex::operator*(const complex &num) const
{
    complex temp = complex(real * num.real - imaginary * num.imaginary, real * num.imaginary + imaginary * num.real);
    return temp;
}

complex complex::operator~() const
{
    complex temp = complex(real, -imaginary);
    return temp;
}

complex operator*(double i, const complex &num)
{
    complex temp = complex(num.real * i, num.imaginary * i);
    return temp;
}