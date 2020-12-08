#include <iostream>

using std::cout;
using std::endl;

int main() {
    int a[7] = {0, 1, 2, 3, 4, 5, 6};

    for (int *i = a; i < a + 7; i++) {
        *i = 0;        
    }

    for (int i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
