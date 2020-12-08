#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

std::istream &read(std::istream &in) {
    string s;
    while (in >> s) {      //CTRL + D stops the loop
        cout << s;
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
