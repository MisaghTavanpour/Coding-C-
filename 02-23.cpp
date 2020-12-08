/*
yes, we ca.

if (p == NULL)
if (p == nullptr)
if (p == 0) 
*/

#include <iostream>

int main() {
    int *p1 = NULL;
    int *p2 = 0;
    int *p3 = nullptr;
    int *p4;

    if (p1 == NULL) {
        std::cout << "p1 is not pointing to any object" << std::endl;
    }
    if (p2 == nullptr) {
        std::cout << "p2 is not pointing to any object" << std::endl;
    }
    if (p3 == 0) {
        std::cout << "p3 is not pointing to any object" << std::endl;
    }

    if (p4 == NULL) {
        std::cout << "p4 NULL" << std::endl;
    }
    if (p4 == nullptr) {
        std::cout << "p4 nullptr" << std::endl;
    }
    if (p4 == 0) {
        std::cout << "p4 0" << std::endl;
    }

    return 0;
}

/*
p1 is not pointing to any object
p2 is not pointing to any object
p3 is not pointing to any object
*/
