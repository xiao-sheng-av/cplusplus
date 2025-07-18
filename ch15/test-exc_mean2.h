#include <iostream>
#include <stdexcept>
class base : public std::logic_error
{
private:
    double v1;
    double v2;
public:
    base(double a = 0, double b = 0, const std::string & s = "base") : v1(a), v2(b), std::logic_error(s) {}
    void show() { std::cout << "v1 : " << v1 << "  v2 : " << v2 << std::endl; }
};
class bad_hmean : public base
{
public:
    bad_hmean(double a = 0, double b = 0, const std::string & s = "bad_hmean") : base(a, b,s) {}
    void mesg();
    void what() { std::cout << std::logic_error::what() << std::endl; mesg(); }
};
void bad_hmean::mesg()
{
    base::show();
}


class bad_gmean : base
{
public:
    bad_gmean(double a = 0, double b = 0, const std::string & s = "bad_gmean") : base(a, b, s) {}
    void mesg();
    void what() { std::cout << std::logic_error::what() << std::endl; mesg();}
};

void bad_gmean::mesg()
{
    base::show();
}