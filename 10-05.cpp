// works properly
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
    list<const char *> l1{"ab", "cde", "", "fghi"};
    list<const char *> l2{"ab", "cde", "", "fghi"};
    
    bool same = equal(l1.begin(), l1.end(), l2.begin());
    cout << same << endl;
    return 0;
}
