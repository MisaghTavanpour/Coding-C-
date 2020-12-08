#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int abs(int i) {
    return (i < 0 ? -i : i);
}

int main() {
    int i;
    
    cout << "Please enter an integer: ";
    cin >> i;
    cout << "abs(" << i << ") = " << abs(i) << endl;
        
    return 0;
}
