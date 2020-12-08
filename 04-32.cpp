#include <iostream>


using std::cout;
using std::endl;

int main() {
    constexpr int size = 5;
    int ia[size] = {1,2,3,4,5};
    cout << ia << endl;
    cout << ia + size << endl;
    for (int *ptr = ia, ix = 0; ix != size && ptr != ia+size; ++ix, ++ptr) {
        cout << ix << " " << ptr << endl;
    }
    return 0;
}
/*
0x7ffee36caaa0
0x7ffee36caab4
0 0x7ffee36caaa0
1 0x7ffee36caaa4
2 0x7ffee36caaa8
3 0x7ffee36caaac
4 0x7ffee36caab0
*/
