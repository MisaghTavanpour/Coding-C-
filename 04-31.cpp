/*
if we ise postfix, it keeps a copy of original value.
*/

#include <iostream>
#include <vector>


using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> ivec(5);
    vector<int>::size_type cnt = ivec.size();
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt) {
        ivec[ix] = cnt;
        cout << ix << " " << ivec[ix] << endl;
    }
    cout << endl;
    cnt = ivec.size();
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--) {
        ivec[ix] = cnt;
        cout << ix << " " << ivec[ix] << endl;
    }
    return 0;
}
/*
0 5
1 4
2 3
3 2
4 1

0 5
1 4
2 3
3 2
4 1
*/
