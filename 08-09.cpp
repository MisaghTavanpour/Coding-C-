#include <iostream>
#include <string>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::istringstream;

std::istream &read(std::istream &in) {
    string s;
    while (getline(in, s)) {
        istringstream strm(s);
        while (strm >> s) {
            cout << s << endl;
        }
    }
    if (in.eof()) {
        cout << endl << "** EOF **" << endl;
    }
    return in;
}

int main() {
    read(cin);
    return 0;
}
