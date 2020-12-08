#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    int same = 1;
    const int aSize = 5;
    const int bSize = 5;

    int a[aSize] = {1, 2, 3, 4, 5};
    int b[bSize] = {1, 2, 3, 4, 5};

    if (aSize == bSize) {
        for (int i = 0; i < aSize; i++) {
            if (a[i] != b[i]) {
                same = 0;
                i = aSize;
            }
        }
    } else {
        same = 0;
    }
   
    if (same == 1){
        cout << "Same" << endl;
    } else {
        cout << "not Same" << endl;
    }

    // for Vectors
    vector<int> va(10,1);
    vector<int> vb(10,1);

    if (va == vb) {
        cout << "Same" << endl;
    } else {
        cout << "not Same" << endl;
    }     

    return 0;
}
