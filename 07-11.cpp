#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    Sales_data data1;
    Sales_data data2{"123"};
    Sales_data data3{"123", 3, 10};
    Sales_data data4{cin};
    
    print(cout, data1);
    cout << endl;
    print(cout, data2);
    cout << endl;
    print(cout, data3);
    cout << endl;
    print(cout, data4);        
    cout << endl;

    return 0;
}
