#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> va(begin(a), end(a));
    
    for (int i = 0; i < va.size(); i++) {
        cout << va[i] << " ";
    }
    
    cout << endl;
}
