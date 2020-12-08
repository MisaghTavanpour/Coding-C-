#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    string s = "I wfh these days, and wfh is good. so wfh";
    string oldVal = "wfh";
    string newVal = "work from home";

    unsigned int index = 0;

    while (index < (s.size() - oldVal.size() + 1)) {
        string tmp = s.substr(index, oldVal.size());
        if (tmp == oldVal) {
            s.replace(index, oldVal.size(), newVal);
            index += newVal.size();
        }        
        ++index;
    }
    cout << s << endl;

    return 0;
}
