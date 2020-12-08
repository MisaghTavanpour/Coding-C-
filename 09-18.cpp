#include <iostream>
#include <deque>
#include <string>

using std::deque;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    deque<string> q;
    deque<string>::const_iterator qt;
    string str;

    while (cin >> str) {
        q.push_back(str);
    }

    for (auto i : q) {
        cout << i << endl;
    }

    return 0;
}
