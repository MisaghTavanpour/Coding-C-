#include <iostream>
#include <vector>
#include <list>
#include <set>
#include "Sales_data.h"

using namespace std;

bool compareIsbn (const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() < rhs.isbn();
};


int main() {
    multiset<Sales_data, bool (*)(const Sales_data &lhs, const Sales_data &rhs)> bookstore(compareIsbn);
    return 0;
}
