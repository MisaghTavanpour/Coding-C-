#include <iostream>

using std::cout;
using std::endl;

int main() {
    auto f = [] (const int a, const int b) {return a + b;};
    cout << f(1,1) << endl;
    cout << f(2,2) << endl;
    cout << f(3,3) << endl;
    cout << f(4,4) << endl;
    cout << f(5,5) << endl;
    return 0;
}
