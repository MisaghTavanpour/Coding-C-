#include <iostream>

using std::cout;
using std::endl;

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

decltype(odd) &arrPtr(int i) {
    int (&a)[5] = (i % 2) ? odd : even;
    return a;
}

int main() {
    int (&a)[5] = arrPtr(1);
    for(auto i : a) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
