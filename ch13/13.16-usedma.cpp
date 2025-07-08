#include <iostream>
#include "13.14-dam.h"
int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Oirtabelly", 8);
    lackDMA ballon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);
    cout << "Displaying baseDma object:\n";
    cout << shirt << endl;
    
    cout << "Displaying lackDMA object:\n";
    cout << ballon << endl;

    cout << "Displaying hasDMA object:\n";
    cout << map << endl;

    lackDMA ballon2(ballon);
    cout << "Result of lacksDMA copy:\n";
    cout << ballon2 << endl;
    hasDMA map2;
    map2 = map;
    cout << "Result of hasDMA assignment:\n";
    cout << map2 << endl;
    return 0;
}