#include <iostream>

int main() {
    int a, b, c, d;

    std::cout << "Please enter four integers: " << std::endl;
    std::cin >> a >> b >> c >>d;
    if (a > b && b > c && c > d) {    
        std::cout << "a > b > c > d" << std::endl;
    }
    
    return 0;
}
