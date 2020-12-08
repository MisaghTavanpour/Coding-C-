#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v2,v3;
    list<int> l1;

    copy(v.begin(), v.end(), front_inserter(l1));
    copy(v.begin(), v.end(), inserter(v2, v2.begin()));
    copy(v.begin(), v.end(), back_inserter(v3));

    for (auto i : l1) {
        cout << i << " ";
    }
    cout << endl;

    for (auto i : v2) {
        cout << i << " ";
    }
    cout << endl;

    for (auto i : v3) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
