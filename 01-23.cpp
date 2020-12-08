#include <iostream>
#include "Sales_item.h"

int main() {
    //Lets assume we can have up to 3 different ISBN.
    Sales_item item1, item2, item3, tmpItem;
    int b1 = 0, b2 = 0, b3 = 0;
    int processed;

    std::cout << "Please enter the item transaction:";
    while (std::cin >> tmpItem) {
        processed = 0;
        if (b1) {
            if (item1.isbn() == tmpItem.isbn()) {
                item1 = item1 + tmpItem;
                processed = 1; 
            }
        } else if (b2) {
           if (item2.isbn() == tmpItem.isbn()) {
                item2 = item2 + tmpItem;
                processed = 1; 
            }
        } else if (b3) {
           if (item3.isbn() == tmpItem.isbn()) {
                item3 = item3 + tmpItem;
                processed = 1; 
            }
        }

        if (processed == 0) {
            if (b1 == 0) {
                item1 = tmpItem;
                b1 = 1;
            } else if (b2 == 0) {
                item2 = tmpItem;
                b2 = 1;
            } else if (b3 == 0) {
                item3 = tmpItem;
                b3 = 1;
            }
        }

        std::cout << "Please enter the next item transaction:";
    }

    std::cout << endl << "Results:" << std::endl;
    std::cout << item1 << std::endl;
    std::cout << item2 << std::endl;
    std::cout << item3 << std::endl;
    return 0;
}
