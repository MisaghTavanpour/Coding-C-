#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::string;
using std::vector;

int main() {
    string str;
    vector<string> vstr;

    while (cin >> str) {
        vstr.push_back(str);
    }
    
    return 0;
}
