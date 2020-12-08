#include <iostream>

using std::cout;
using std::endl;

int main () {
    int i = 50;
    int sum = 0;

    while (i < 101) {
        sum = sum + i;
        i = i + 1;
    }

    cout << "The sum of integers in [50, 100] is " << sum << endl;
    return 0;
} 
