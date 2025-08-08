#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    char ch;

    while (cin.get(ch))
    {
        if (ch != '#')
            cout << ch;
        else
        {
            //putback将ch字符放到输入流中
            cin.putback(ch);
            break;
        }
    }
    if (!cin.eof())
    {
        cin.get(ch);
        cout << endl << ch << " is next input character.\n";
    }
    else
    {
        cout << "End of file reached.\n";
        std::exit(0);
    }
    //peek检查输入流中第一个字符是什么
    while (cin.peek() != '#')
    {
        cin.get(ch);
        cout << ch;
    }
    if (!cin.eof())
    {
        cin.get(ch);
        cout << endl << ch << " is next input character.\n";
    }
    else
        cout << "End of file reached.\n";
    return 0;
}