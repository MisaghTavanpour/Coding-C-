#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6};

    for (auto &i : vec) {
        (i % 2 == 1) ? i *= 2 : i;
    }


    for (auto i : vec) {
        cout << i << " " << endl;
    }

    return 0;
}
