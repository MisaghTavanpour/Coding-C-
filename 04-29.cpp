#include <iostream>

using std::cout;
using std::endl;

int main() {
    int x[10]; int *p = x;

    cout << sizeof(x)  << endl;
    cout << sizeof(*x) << endl;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)  << endl;
    cout << sizeof(*p) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;

    return 0;
}
/*
40
4
10
8
4
2
*/
