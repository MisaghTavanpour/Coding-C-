#include <iostream>
#include <algorithm>
#include <vector>
#include "Sales_data_ch10.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

bool compareIsbn (Sales_data s1, Sales_data s2) {        
    return (s1.isbn() < s2.isbn() ? true : false);
}

int main() {
    vector<Sales_data> v;
    v.push_back(Sales_data("1", 2, 20));
    v.push_back(Sales_data("4", 2, 40));
    v.push_back(Sales_data("3", 2, 20));
    v.push_back(Sales_data("1", 3, 30));
    v.push_back(Sales_data("2", 3, 60));    
    for (Sales_data i : v) cout << i.isbn() << " ";
    cout << endl;

    sort(v.begin(), v.end(), compareIsbn);
    for (Sales_data i : v) cout << i.isbn() << " ";
    cout << endl;
    return 0;
}
