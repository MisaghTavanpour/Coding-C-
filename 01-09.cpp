#include <iostream>

int main () {
    int i = 50;
    int sum = 0;

    while (i < 101) {
        sum = sum + i;
        i = i + 1;
    }

    std::cout << "The sum of integers in [50, 100] is " << sum << std::endl;
    return 0;
} 
