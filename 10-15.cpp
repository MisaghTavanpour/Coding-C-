#include <iostream>

using std::cout;
using std::endl;

int main() {
    const int base = 10;
    auto f = [base] (const int a) {return base + a;};
    cout << f(11) << endl;
    cout << f(22) << endl;
    cout << f(33) << endl;
    cout << f(44) << endl;
    cout << f(55) << endl;
    return 0;
}
