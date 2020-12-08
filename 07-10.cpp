//read the fist data and then the secon data.

#include <iostream>
#include <string>
#include "Person.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person  data1, data2;
    read((read(cin, data1)), data2);
    print(cout, data1);
    cout << endl;
    print(cout, data2);
    cout << endl;
    return 0;
}
