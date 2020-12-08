#include <iostream>

int main() {
    const char *cp = "Hello World";
    if (cp && *cp) {
       std::cout << "It is true!" << std::endl;
    }
    
    return 0;
}

/*
It is true!
*/
