#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;

int main() {
    vector<int> v1 = {1, 2, 3};
    list<int> l1 = {1, 2, 3, 4};

    if (v1.size() == l1.size()) {
        list<int>::const_iterator lit = l1.begin();
        for (auto i = 0; i < v1.size(); ++i) {
            if (v1[i] != *lit) return -1;
            ++lit;
        }
        return 0;
    }

    return -1;
}
