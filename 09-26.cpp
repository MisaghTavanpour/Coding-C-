#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main() {
    int a[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    int size = sizeof(a) / sizeof(a[0]);
    vector<int> v(a, a + size);
    list<int> l(a, a + size);    

    vector<int>::iterator it = v.begin();
    while(it != v.end()) {
        if (*it % 2 == 1) {
            it = v.erase(it);
        } else {
            ++it;
        }
    }

    list<int>::iterator lit = l.begin();
    while(lit != l.end()) {
        if (*lit % 2 == 0) {
            lit = l.erase(lit);
        } else {
            ++lit;
        }
    }


    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    for (auto i : l) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
