#include <iostream>

int main () {
    int v1, v2, i;

    std::cout << "Please enter two integers (first the smaller one)..." << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "The list of integers between the above two numbers is:" << std::endl;

    i = v1 + 1;
    while (i < v2) {
        std::cout << i << std::endl;
        i++;
    }
    return 0;
} 
