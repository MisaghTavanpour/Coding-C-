#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size (const string &s, string::size_type sz) {
    return s.size() >= sz;
}

int main() {
    string str = "abcdef";
    vector<int> v{1,2,3,4,5,6,7,8,9};
    int index = 0;
    auto countStr = bind(check_size, _1, ref(index));

    while (countStr(str, index)) {
        ++index;   
    }
    
    cout << "index is " << index << endl;
    return 0;
}
