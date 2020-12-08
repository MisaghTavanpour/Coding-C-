/*
will miss the first element and will print teh content of memory after the end of the vector.
*/
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> v = {1,2,3,4,5};

    auto pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0)
        cout << *++pbeg << endl;
    return 0;
}
/*
2
3
4
5
1980124477
*/
