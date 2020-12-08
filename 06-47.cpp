#include <iostream>
#include <vector>

#define NDEBUG
#include <cassert>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


void print(vector<int> &v, int index) {
    assert(index > 0);
    if ((v.size() - index) < v.size()) {
        cout << v[v.size() - index] << " ";
        return print(v, --index);
    }
    cout << endl;
}

int main() {
    vector<int> v3{1,2,3};

    print(v3, v3.size());

    return 0;
}

/*
//without '#define NDEBUG' line
Assertion failed: (index > 0), function print, file 06-47.cpp, line 10.
1 2 3 Abort trap: 6

After adding guards:
1 2 3
*/
