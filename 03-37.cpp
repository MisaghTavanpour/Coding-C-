#include <iostream>

int main() {
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp) {
        std::cout << *cp << std::endl;
        ++cp;
    }
    return 0;
}

//It prints until reaches a null char.  In below case, it hit after 'o'
/*
h
e
l
l
o
*/
