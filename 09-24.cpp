#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> v1{1,2,3,4};
    vector<int> v2;

    cout << v1[0] << endl;
    cout << v1.front() << endl;
    cout << *v1.begin() << endl;

    return 0;
}
