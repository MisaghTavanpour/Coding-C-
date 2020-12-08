#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int value = 4;
    vector<int>::iterator it = vec.end();

    for(vector<int>::iterator i = vec.begin(); i < vec.end(); i++) {
        if (*i == value) {
            it = i;
            break;
        }
    }

    if (it == vec.end()) return -1;
    return *it;
}

