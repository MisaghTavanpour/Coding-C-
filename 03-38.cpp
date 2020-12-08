/*
adding two pointer is not a valid operatopn and even if we could, the reuslt would point to 
somewhere in the memory that most probably we even do not what is its value ot type 
or even it is begining of an object or middle of an object in the memory.
*/

#include <iostream>

int main() {
    int   ca1[] = {1, 2};
    int   ca2[] = {3, 4};
    int  *cp1 = ca1;
    int  *cp2 = ca2;

    std::cout << cp1 << std::endl;
    std::cout << *cp1 << std::endl;
    std::cout << cp2 << std::endl;
    std::cout << *cp2 << std::endl;
    std::cout << cp1 + cp2 << std::endl;
    std::cout << *(cp1 + cp2) << std::endl;

    return 0;
}

/*
03-38.c:17:22: error: invalid operands to binary expression ('int *' and 'int *')
    std::cout << cp1 + cp2 << std::endl;
                 ~~~ ^ ~~~
03-38.c:18:24: error: invalid operands to binary expression ('int *' and 'int *')
    std::cout << *(cp1 + cp2) << std::endl;
                   ~~~ ^ ~~~
2 errors generated.
*/
