#include <iostream>

int main () {
    int v1, v2;

    std::cout << "Please enter two integers..." << std::endl;
    std::cin >> v1 >> v2;

    std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;
    return 0;
} 

/*
It is not legal. As you can see in below, the compiler complained:

> g++ 01-06.c -o 01-06.exe 
 clang: warning: treating 'c' input as 'c++' when in C++ mode, this behavior is deprecated [-Wdeprecated]
 01-06.c:10:15: error: expected expression
              << " and " << v2;
              ^
 01-06.c:11:15: error: expected expression
              << " is " << v1 + v2 << std::endl;
              ^
 2 errors generated.
    
 */

/*
 FIX:
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    
    or

    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;

 */
