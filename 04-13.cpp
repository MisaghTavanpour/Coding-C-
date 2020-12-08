#include <iostream>

int main() {
    int i; double d;

    d = i = 3.5;
    std::cout << i << std::endl;
    std::cout << d << std::endl;
    i = d = 3.5;
    std::cout << i << std::endl;
    std::cout << d << std::endl;
    
    return 0;
}
/*
3
3
3
3.5
*/
