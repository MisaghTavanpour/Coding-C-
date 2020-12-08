#include <iostream>

using std::cout;
using std::endl;

int main() {
    int i = 4;
    int iBk = i;
    auto lam = [&] {return (i == 0 ? true : (--i, false));}; 

    for (int j = 1; j < iBk + 3; ++j) {
        cout << i << " " << lam() << endl;
    }
    return 0;
}
