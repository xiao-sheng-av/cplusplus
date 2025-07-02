#ifndef STOCK10_H_
#define STOCK10_H_
#include <string>
#include <iostream>
class Stock
{
private:
    char *company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();
    ~Stock();
    Stock(const Stock &s);
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const; 
    friend std::ostream & operator<<(std::ostream &os, const Stock &s);
    Stock &operator=(const Stock &s);
    const Stock &topval(const Stock &s) const;
};

#endif