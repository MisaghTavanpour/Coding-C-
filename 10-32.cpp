#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include "Sales_data_ch10.h"

using namespace std;

bool compareIsbn (Sales_data s1, Sales_data s2) {        
    return (s1.isbn() < s2.isbn() ? true : false);
}

int main() {
    vector<Sales_data> v;
    vector<Sales_data>::iterator it, last;
/*
    Sales_data tmp("", 0, 0);
    while (cin >> tmp) {
        v.push_back(tmp);
    }
*/
    v.push_back(Sales_data("1", 2, 20));
    v.push_back(Sales_data("4", 2, 40));
    v.push_back(Sales_data("3", 2, 20));
    v.push_back(Sales_data("1", 3, 30));
    v.push_back(Sales_data("2", 3, 60));    
    v.push_back(Sales_data("2", 3, 60));    
    v.push_back(Sales_data("4", 3, 60));    

    sort(v.begin(), v.end(), compareIsbn);

    it = v.begin();
    while (it < v.end()) {
        Sales_data tmp(it->isbn(), 0, 0);
        last = it; 
        while (last->isbn() == it->isbn() && last != v.end()) {
            tmp.combine(*last);
            ++last;
        }
        cout << tmp.isbn() << " " << tmp.unit() << " " << tmp.rev() << " " << endl;
        it = last;
    }

    return 0;
}
