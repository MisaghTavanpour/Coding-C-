#include <iostream>

using std::cout;
using std::endl;

int main() {
    int a[7] = {0, 1, 2, 3, 4, 5, 6};
    
    int *p1 = &a[2];
    int *p2 = &a[5];

    cout << p1 << ", " << *p1 << ", " << p2 << ", " << *p2 << endl;

    p1 += p2 - p1;  // p1 = p1 + p2 - p1; --> p1 = p2;

    cout << p1 << ", " << *p1 << ", " << p2 << ", " << *p2 << endl;
    
    return 0;
}

/*
0x7ffee1496a98, 2, 0x7ffee1496aa4, 5
0x7ffee1496aa4, 5, 0x7ffee1496aa4, 5
*/


