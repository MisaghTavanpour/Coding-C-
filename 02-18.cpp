#include <iostream>

int main() {
    int var1 = 10, var2 = 20;
    int *p = &var1;
    
    std::cout << "var1 address : " << &var1 << std::endl;
    std::cout << "var2 address : " << &var2 << std::endl;
    std::cout << "p add " << p << ", p value " << *p << std::endl;

    *p = 11;        
    std::cout << "var1 value : " << var1 << std::endl;

    p = &var2;
    std::cout << "p add " << p << ", p value " << *p << std::endl;

    return 0;
}

/*
var1 address : 0x7ffeea5cda68
var2 address : 0x7ffeea5cda64
p add 0x7ffeea5cda68, p value10
var1 value : 11
p add 0x7ffeea5cda64, p value20
*/
