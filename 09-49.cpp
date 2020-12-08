#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;

string & findLongestWithNoAcsenderDeccender(const string &s, string &longest) {
    string ascender("bdfhklt");
    string descender("gjpqy");
    string::size_type pos = string::npos;

    if (s.find_first_of(ascender) == string::npos) {
        if (s.find_first_of(descender) == string::npos) {
            if (s.size() > longest.size()) {
                longest = s;
            }
        }
    }

    return longest;
}

int main() {
    string longest = "", str;
    ifstream in("09-49.cpp");

    if (in) {
        while (in >> str) {
            longest = findLongestWithNoAcsenderDeccender(str, longest);
        }
    }

    cout << longest << endl;
    return 0;
}
