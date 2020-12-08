#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> v;
    unsigned int seq = 5;
    auto rep = fill_n(std::back_inserter(v), seq, 0);
    for (const int i : v) {
        cout << i << " " << endl;
    }
    return 0;
}
