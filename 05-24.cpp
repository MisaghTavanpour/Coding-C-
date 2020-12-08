#include <iostream>
#include <string>
#include <stdexcept>


using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main() {
    int i1, i2;
    
    cout << "Please enter the two integers:" << endl;
    cin >> i1 >> i2;

    try {
        if (i2 == 0) throw runtime_error("The second number cannot be zero!");
        cout << i1 / i2 << endl;
    } catch (runtime_error err) {
        cout << err.what() << endl;
    }
    return 0;
}
