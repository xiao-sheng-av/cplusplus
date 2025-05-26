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

std::istream &operator>>(std::istream &oc, complex &num)
{
    std::cout << "real: ";
    if(!(std::cin >> num.real))
        return oc;

    std::cout << "imaginary: ";
    std::cin >> num.imaginary;

    return oc;
}

std::ostream &operator<<(std::ostream &oc, const complex &num)
{
    std::cout << "(" << num.real << ", " << num.imaginary << "i)\n";
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