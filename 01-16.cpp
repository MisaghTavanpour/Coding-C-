#include <iostream>

int main () {
    int sum = 0;
    int input = 1;

    while (input != 0) {
        std::cout << "Please enter an integer to be added to the sum (enter 0 to stop)" << std::endl;
        std::cin >> input;
        std::cout << "You entered " << input << std::endl;
        sum = sum + input;
    }

    std::cout << "The sum of integer numbers you have entered is " << sum << std::endl;
    return 0;
}
