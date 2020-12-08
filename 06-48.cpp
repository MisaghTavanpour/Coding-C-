#include <iostream>
#include <string>
#include <cassert>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main() {
    string sought = "x";
    string s;
    while (cin >> s && s != sought) { }
    assert(cin);      // no use of assert in here

    return 0;
}
