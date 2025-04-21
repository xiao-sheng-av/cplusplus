#include <iostream>
void simon(int);

int main()
{
    simon(3);
    std::cout << "Pick an integer: ";
    int count;
    std::cin >> count; 
    simon(count);
    std::cout << "Done!" << std::endl;
    return 0;
}

void simon(int n)
{
    std::cout << "Simon says touch your toes " << n << " times." << std::endl;
}