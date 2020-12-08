#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5};

    for (auto i = (--v.end()); i >= v.begin(); --i) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
