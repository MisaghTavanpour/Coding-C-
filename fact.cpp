#include <iostream>

int fact(int i) {
    int result = 1;
    for (int j = 2; j <=i; j++) {
        result *= j;       
    }

    return result;
}
