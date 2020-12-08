#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int value = 10;

    for(vector<int>::iterator i = vec.begin(); i < vec.end(); i++) {
        if (*i == value) {
            return 0;
        }
    }

    return -1;
}

