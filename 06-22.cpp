#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int **i, int **j) {
    int *k = *i;
    *i = *j;
    *j = k;
}

int main() {
    int i1, i2;
    int *p1 = &i1, *p2 = &i2;
    
    cout << "Please enter two integers." << endl;    
    cin >> i1 >> i2;
    swap(&p1, &p2);
    cout << *p1 << " " << *p2 << endl;
    return 0;
}
