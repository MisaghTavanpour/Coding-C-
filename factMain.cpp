#include <iostream>
#include "Chapter6.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    int i;
    
    cout << "Please enter an integer >= 0: ";
    cin >> i;
    cout << i << "! = " << fact(i) << endl;;
        
    return 0;
}
