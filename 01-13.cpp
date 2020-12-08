#include <iostream>

int main () {
    int sum = 0;

    for (int i = 50; i < 101; ++i) {
        sum = sum + i;
    }

    std::cout << "The sum of integers in [50, 100] is " << sum << std::endl;
    return 0;
} 
