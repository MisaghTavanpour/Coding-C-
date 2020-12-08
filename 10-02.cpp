#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

int main() {
    list<string> v{"ab", "cff", "werwe", "ab", "ab", "erew"};
    auto rep = count(v.begin(), v.end(), "ab");
    cout << "ab count is " << rep << endl;
    rep = count(v.begin(), v.end(), "xc");
    cout << "xc count is " << rep << endl;
    rep = count(v.begin(), v.end(), "cff");
    cout << "cff count is " << rep << endl;
    return 0;
}
