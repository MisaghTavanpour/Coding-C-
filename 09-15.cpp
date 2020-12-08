#include <iostream>
#include <vector>

using std::vector;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {1, 2, 3, 4};

    if (v1 == v2) return 0;
    else return 1;
}
