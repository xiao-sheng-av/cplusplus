#include <iostream>
#include "10.04-stock10.h"

int main()
{
    {
        using std::cout;
        cout << "Using constructors to create new objects\n";
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        //可能会创建临时变量，也可能不会
        Stock stock2 = Stock("Boffo objects", 2, 2.0);
        stock2.show();

        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();
        
        cout << "Using a constructor to reset an object\n";
        //让构造程序创建一个新的、临时的对象，然后将其内容复制给stock1来实现的。所以该语句结束后会输出Bye, Nifty Foods!，表示该零时变量被销毁
        stock1 = Stock("Nifty Foods", 10, 50.0);
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
        //由于这种自动变量被放在栈中，因此最后创建的对象将最先被删除，最先创建的对象将最后被删除
    }
    return 0;
}