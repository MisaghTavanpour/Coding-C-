#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> v{0,1,2,3,4,51,3,4,54,2,3,4,1};
    auto rep = count(v.begin(), v.end(), 1);
    cout << "1 count is " << rep << endl;
    rep = count(v.begin(), v.end(), 0);
    cout << "4 count is " << rep << endl;
    rep = count(v.begin(), v.end(), 9);
    cout << "9 count is " << rep << endl;
    return 0;
}
