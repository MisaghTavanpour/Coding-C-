#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    string s = "I wfh these days, and wfh is good. so wfh!";
    string oldVal = "wfh";
    string newVal = "work from home";

    string::iterator it = s.begin();

    while (it < s.end()) {
        string tmp(it, it + oldVal.size());
        if (tmp == oldVal) {
            it = s.erase(it, it + oldVal.size());
            it = s.insert(it, newVal.begin(), newVal.end());
            it += newVal.size();
        }        
        ++it;
    }
    cout << s << endl;

    return 0;
}
