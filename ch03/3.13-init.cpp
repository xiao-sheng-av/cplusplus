#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;
    //int会将小数点后面的数字截取掉，而不是四舍五入，所以输出guess为3
    int guess(3.9832);
    int debt = 7.2E12;
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0;
}

//{}初始化：列表初始化，列表初始化不允许缩窄