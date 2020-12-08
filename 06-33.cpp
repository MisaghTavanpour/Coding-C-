#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print(vector<int> &v, int index) {
    if (index < v.size()) {
        cout << v[index] << " ";
        return print(v, ++index);
    }
    cout << endl;
}

int main() {
    vector<int> v1{};
    vector<int> v2{1};
    vector<int> v3{1,2,3};

    print(v1, 0);
    print(v2, 0);
    print(v3, 0);

    return 0;
}
