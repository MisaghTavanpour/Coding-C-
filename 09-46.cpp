#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

string edit(string s, string prefix = "", string suffix = "") {
    if (prefix != "") prefix += " ";
    if (suffix != "") suffix = " " + suffix;
    s.insert(s.begin(), prefix.begin(), prefix.end());
    s.insert(s.end(), suffix.begin(), suffix.end());
    return s;
}


int main() {
    cout << edit("John", "Mr.", "the First") << endl;
    cout << edit("John") << endl;
    cout << edit("John", "Dr.") << endl;

    return 0;
}
