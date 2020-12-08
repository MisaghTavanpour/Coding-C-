#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item, sum;
    std::cout << "Please enter the item transaction:";
    while (std::cin >> item) {
        sum = sum + item;
        std::cout << "The sum of the entered transcations so far is:" << sum << std::endl;
        std::cout << "Please enter the item transaction:";
    }

    return 0;
}
