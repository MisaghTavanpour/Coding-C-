#include <iostream>

using std::cout;
using std::endl;

void f() {cout << "f()" << endl;}
void f(int) {cout << "f(int)" << endl;}
void f(int, int) {cout << "f(int, int)" << endl;}
void f(double, double = 3.15) {cout << "f(double, double)" << endl;}

int main() {
//  f(2.56, 42);    // error: call to 'f' is ambiguous
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}

/*
f(int)
f(int, int)
f(double, double)
*/
