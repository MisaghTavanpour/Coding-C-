//Person(std::string n, std::string a) : name(n), address(a) {}

#include <iostream>
#include <string>
#include "Person.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person  data1{"abs", "Add"};
    print(cout, data1);
    cout << endl;
    Person  data2;
    print(cout, data2);
    cout << endl;

    return 0;
}
