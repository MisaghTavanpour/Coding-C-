#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> v;
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(1);
    cout << v.size() << " " << v.capacity() << endl;
    v.reserve(10);
    cout << v.size() << " " << v.capacity() << endl;
    v.shrink_to_fit();
    cout << v.size() << " " << v.capacity() << endl;
    v.resize(30);
    cout << v.size() << " " << v.capacity() << endl;
    v.shrink_to_fit();
    cout << v.size() << " " << v.capacity() << endl;

    return 0;
}
/* Output:
0 0
1 1
1 10
1 1
30 30
30 30
*/
