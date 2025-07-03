#include <iostream>
#include "13.07-brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Piggy("Porcelot pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 392299, 3000.00);
    Piggy.ViewAcct();
    cout << endl;

    Hoggy.ViewAcct();
    cout << endl;
    cout << "Depositing $1000 into the Hogg account:\n";
    Hoggy.Deposit(1000.00);
    cout << "New balance: $" << Hoggy.Balance() << endl;
    cout << "Withdrawing $4200 from the pigg Account:\n";
    Piggy.Withdraw(4200.00);
    cout << "Pigg account balance: $" << Piggy.Balance() << endl;
    cout << "Withdrawing $4200 from the Hogg Account:\n";
    Hoggy.Withdraw(4200.0);
    Hoggy.ViewAcct();

    return 0;
}