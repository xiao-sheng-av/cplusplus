#include <iostream>

int main()
{
    using namespace std;
    char ch;

    cout << "Enter a character: " << endl;
    cin >> ch;  //输入时，cin将键盘输入的M转换为77；
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl; //输出时，cout将值77转换为所显示的字符M；
    return 0;
}