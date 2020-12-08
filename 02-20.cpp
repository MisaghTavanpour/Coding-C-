#include <iostream>

int main() {
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;   // it is like i = i * i;

    std::cout << "i value " << i << ", p1 value " << *p1 << std::endl;

    return 0;
}

/*
i value 1764, p1 value 1764
*/
