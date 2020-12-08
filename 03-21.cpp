#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    vector<int> v1;                // 0 intIt
    vector<int> v2(10);            // 10 intIts, init value default of int obj
    vector<int> v3(10, 42);        // 10 intIts, init value 42
    vector<int> v4{10};            // 1 intIt,   init value 10
    vector<int> v5{10, 42};        // 2 intIts,  init values are 10, 42
    vector<string> v6{10};         // 10 intIts, init value dedault of string obj
    vector<string> v7{10, "hi"};   // 10 intIts, init value "hi"

    vector<int>::iterator intIt;

    cout << "v1.size = " << v1.size() << endl;
    for (intIt = v1.begin(); intIt != v1.end(); intIt++){
        cout << *intIt << " ";
    }
    cout << endl;

    cout << "v2.size = " << v2.size() << endl;
    for (intIt = v2.begin(); intIt != v2.end(); intIt++) {
        cout << *intIt << " ";
    }
    cout << endl;

    cout << "v3.size = " << v3.size() << endl;
    for (intIt = v3.begin(); intIt != v3.end(); intIt++) {
        cout << *intIt << " ";
    }
    cout << endl;

    cout << "v4.size = " << v4.size() << endl;
    for (intIt = v4.begin(); intIt != v4.end(); intIt++) {
        cout << *intIt << " ";
    }
    cout << endl;

    cout << "v5.size = " << v5.size() << endl;
    for (intIt = v5.begin(); intIt != v5.end(); intIt++) {
        cout << *intIt << " ";
    }
    cout << endl;

    cout << "v6.size = " << v6.size() << endl;
    for (auto strIt = v6.begin(); strIt != v6.end(); strIt++) {
        cout << *strIt << " ";
    }
    cout << endl;

    cout << "v7.size = " << v7.size() << endl;
    for (auto strIt = v7.begin(); strIt != v7.end(); strIt++) {
        cout << *strIt << " ";
    }
    cout << endl;

    return 0;
}
