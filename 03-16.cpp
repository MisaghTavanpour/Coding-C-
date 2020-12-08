#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    vector<int> v1;                // 0 element
    vector<int> v2(10);            // 10 elements, init value default of int obj
    vector<int> v3(10, 42);        // 10 elements, init value 42
    vector<int> v4{10};            // 1 element,   init value 10
    vector<int> v5{10, 42};        // 2 elements,  init values are 10, 42
    vector<string> v6{10};         // 10 elements, init value dedault of string obj
    vector<string> v7{10, "hi"};   // 10 elements, init value "hi"

    cout << "v1.size = " << v1.size() << endl;
    for (auto element : v1) {
        cout << element << " ";
    }
    cout << endl;

    cout << "v2.size = " << v2.size() << endl;
    for (auto element : v2) {
        cout << element << " ";
    }
    cout << endl;

    cout << "v3.size = " << v3.size() << endl;
    for (auto element : v3) {
        cout << element << " ";
    }
    cout << endl;

    cout << "v4.size = " << v4.size() << endl;
    for (auto element : v4) {
        cout << element << " ";
    }
    cout << endl;

    cout << "v5.size = " << v5.size() << endl;
    for (auto element : v5) {
        cout << element << " ";
    }
    cout << endl;

    cout << "v6.size = " << v6.size() << endl;
    for (auto element : v6) {
        cout << element << " ";
    }
    cout << endl;

    cout << "v7.size = " << v7.size() << endl;
    for (auto element : v7) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
