#include <iostream>
#include "test-stock.h"
#include <cstring>
Stock::Stock()
{
    company = new char[8];
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
    company = new char[co.size() + 1];
    std::strcpy(company, co.c_str());
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    std::cout << "Bye, " << company << "!\n";
        delete [] company;
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't shell more than you have!"
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    // fixed表示采用固定小数点输出，scientific表示科学计数法，floatfield表示这是用于设置浮动格式的标志。
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Company: " << company
         << " Shares: " << shares << '\n';
    cout << " share Price: $" << share_val;
    cout.precision(2);
    cout << " Total Worth: $" << total_val << '\n';

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
std::ostream &operator<<(std::ostream &os, const Stock &s)
{
    using std::ios_base;
    // fixed表示采用固定小数点输出，scientific表示科学计数法，floatfield表示这是用于设置浮动格式的标志。
    ios_base::fmtflags orig =
        os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = os.precision(3);
    os << "Company: " << s.company
       << " Shares: " << s.shares << '\n';
    os << " share Price: $" << s.share_val;
    os.precision(2);
    os << " Total Worth: $" << s.total_val << '\n';

    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}
Stock &Stock::operator=(const Stock &s)
{
    delete[] company;
    company = new char[strlen(s.company) + 1];
    strcpy(company, s.company);
    shares = s.shares;
    share_val = s.share_val;
    total_val = s.total_val;
    return *this;
}
const Stock &Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}
Stock::Stock(const Stock &s)
{
    company = new char[strlen(s.company) + 1];
    strcpy(company, s.company);
    shares = s.shares;
    share_val = s.share_val;
    total_val = s.total_val;
}