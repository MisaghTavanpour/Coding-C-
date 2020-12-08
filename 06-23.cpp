#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void print(const int *a, const unsigned int length) {
    for (int i = 0; i < length; ++i) {
        cout << *(a + i) << " ";
    }
    cout << endl;
}

int main() {
    int i = 0, j[2] = {0, 1};

    print(&i, 1);
    print(j, 2);
    return 0;
}
