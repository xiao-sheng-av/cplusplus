#include <iostream>
#include <stdexcept>
class bad_hmean : public std::logic_error
{
private:
    double v1;
    double v2;
public:
    bad_hmean(double a = 0, double b = 0, const std::string & s = "bad_hmean") : v1(a), v2(b), std::logic_error(s) {}
    void mesg();
    void what() {  std::cout << std::logic_error::what() << std::endl; mesg();}
};

inline void bad_hmean::mesg()
{
    std::cout << "hmean(" << v1 << ", " << v2 << "): "
              << "invalid arguments: a = -b\n";
}

class bad_gmean : public std::logic_error
{
public:
    double v1;
    double v2;
    bad_gmean(double a = 0, double b = 0, const std::string & s = "bad_gmean") : v1(a), v2(b), std::logic_error(s) {}
    void mesg();
    void what() { std::cout << std::logic_error::what() << std::endl; mesg();}
};

void bad_gmean::mesg()
{
    std::cout <<  "gmean() arguments should be >= 0\n";
}