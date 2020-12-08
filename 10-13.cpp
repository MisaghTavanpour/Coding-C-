#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

bool atLeastFive(const string &s1) {
    return (s1.size() > 4 ? true: false);
}

int main() {
    vector<string> v{"bbbbb", "aaaaaaa", "ccc", "aaaaaa", "aaaaaa", "aa", "b", "b", "ccccc", "ccc"};    
    for (string i : v) cout << i << " ";
    cout << endl;
    vector<string>::iterator it = partition(v.begin(), v.end(), atLeastFive);
    for (vector<string>::iterator be = v.begin(); be != it; ++be) cout << *be << " ";
    cout << endl;
    return 0;
}
