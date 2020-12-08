#include <iostream>

using std::cout;
using std::endl;

int func() {
    static int i = -1;
    return ++i;
}

int main() {
    for (int i = 0; i < 10 ; ++i) {
        cout << func() << endl;
    }
        
    return 0;
}
