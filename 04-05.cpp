#include <iostream>

int main () {
    std::cout << -30 * 3 + 21 / 5 << std::endl;   // -90 + 4      --> -86 
    std::cout << -30 + 3 * 21 / 5 << std::endl;   // -30 + 63 / 5 --> -30 + 12 --> -18
    std::cout <<  30 / 3 * 21 % 5 << std::endl;   // 10 * 21 % 5  --> 210 % 5  --> 0
    std::cout << -30 / 3 * 21 % 4 << std::endl;   // -10 * 21 % 4 --> -210 % 4 --> -2
    return 0;
}

/*
-86
-18
0
-2
*/
