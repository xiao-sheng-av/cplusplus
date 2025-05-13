#include <iostream>
#include "9.11-namesp.h"
void other(void);
void another(void);
int main(void)
{
    //使用debts名称空间的结构Debt
    using debts::Debt;
    //使用debts名称空间的函数showDebt
    using debts::showDebt;
    Debt golf = { {"benny", "goatsniff"}, 120.0};
    showDebt(golf);
    other();
    another();
    return 0;
}

void other(void)
{
    using std::cout;
    using std::endl;
    //debts中已经包含了per
    using namespace debts;
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    int i;
    for (i = 0; i < 3; i++)
        getDebt(zippy[i]);
    
    for (i = 0; i < 3; i++)
        showDebt(zippy[i]);
    
    cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
    return;

}

void another(void)
{
    using pers::Person;
    Person collector = {"milo", "Rightshift"};
    pers::showPerson(collector);
    std::cout << std::endl;
}