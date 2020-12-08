#include <iostream>
#include <list>
#include <string>

using std::list;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    list<string> l;
    string str;

    while (cin >> str) {
        l.push_back(str);
    }

    for (list<string>::const_iterator lit = l.begin(); lit != l.end(); ++lit) {
        cout << *lit << endl;
    }

    return 0;
}
