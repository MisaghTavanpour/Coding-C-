#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int larger(int i, int *j) {
    return ((i > *j) ? i : *j);
}
int main() {
    int i1, i2;
    
    cout << "Please enter two integers." << endl;    
    cin >> i1 >> i2;
    cout << "The larger value is " << larger(i1, &i2) << endl;

    return 0;
}
