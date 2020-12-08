#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int *i, int *j) {
    int k = *i;
    *i = *j;
    *j = k;    
}

int main() {
    int i, j;
    
    cout << "Please enter two integres:" << endl;
    cin >> i >> j;
    swap(&i, &j);
    cout << i << " " << j << endl;
    return 0;
}
