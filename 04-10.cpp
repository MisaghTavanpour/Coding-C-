#include <iostream>

int main() {
    int i = 0;
    while (i != 42) {    
        std::cout << "Please enter an integer (42 to stop) : " << std::endl;
        std::cin >> i;
    }
    
    return 0;
}
