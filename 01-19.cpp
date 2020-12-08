#include <iostream>

int main () {
    int v1, v2, tmp;

    std::cout << "Please enter two integers" << std::endl;
    std::cin >> v1 >> v2;
    // Make sure v1 has the smaller value        
    if (v1 > v2) {
        tmp = v1;
        v1 = v2;
        v2 = tmp;
    }

    std::cout << "The list of integers between the above two numbers is:" << std::endl;
    while (v1 < v2 - 1) {
        v1++;
        std::cout << v1 << std::endl;
    }

    return 0;
} 
