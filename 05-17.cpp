#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {    
    vector<int> v1 = {1, 2, 4};
    vector<int> v2 = {1, 2, 3, 4, 5, 6};
    vector<int>::iterator itBig, itSmall;
    int sizeSmall;

    if (v1.size() > v2.size()) {
        itBig     = v1.begin();
        itSmall   = v2.begin();
        sizeSmall = v2.size();
    } else {
        itBig     = v2.begin();
        itSmall   = v1.begin();
        sizeSmall = v1.size();
    }

    for (int i = 0; i < sizeSmall; ++i) {
        if (*(itSmall + i) != *(itBig + i)) {
            cout << "FALSE!" << endl;
            return 1;
        }
    }            
    
    cout << "TRUE!" << endl;
    return 0;
}
