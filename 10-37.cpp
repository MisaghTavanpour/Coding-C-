#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> li;
    for (auto i = 3; i < 8; ++i) {
        li.push_front(v[i]);
    }

    for(auto i : li) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
