#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int i) {
    int result = 1;
    for (int j = 2; j <=i; j++) {
        result *= j;       
    }

    return result;
}

int main() {
    int i;
    
    cout << "Please enter an integer >= 0: ";
    cin >> i;
    cout << i << "! = " << fact(i) << endl;;
        
    return 0;
}
