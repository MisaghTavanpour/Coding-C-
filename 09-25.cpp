//if elem1 and elem2 are equal, nothing is going to be deleted.
//if elem2 if off-the-end iterator, everything from e1 till the end of the container will be deleted.

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> v{1,2,3,4,5,6,7,8,9};
    vector<int>::iterator e1, e2, e3;
    e1 = v.begin() + 2;
    e2 = e1;
    //e2 = v.end();

    e3 =v.erase(e1, e2);
    cout << *e3 << endl;    // in both cases, prints 3

    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
