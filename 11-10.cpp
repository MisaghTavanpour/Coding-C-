#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    map<vector<int>, int> myMap1;
    map<list<int>, int> myMap2;

    vector<int> v1{1, 3, 5};
    vector<int> v2{11, 13, 15};

    list<int> l1{2, 4, 6};
    list<int> l2{12, 14, 16};

    myMap1.insert({v1, 1});

    return 0;
}
