#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void edit1(const string s) {
    string num("1234567890");
    string alph("aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ");
    string::size_type pos = 0;
    cout << "Numeric Character positions: ";
    while ((pos = s.find_first_of(num, pos)) != string::npos ) {
        cout << pos << " ";
        ++pos;
    }
    cout << endl << "Alphabetic Character positions: ";
    pos = 0;
    while ((pos = s.find_first_of(alph, pos)) != string::npos ) {
        cout << pos << " ";
        ++pos;
    
    }
    cout << endl;

}

void edit2(const string s) {
    string num("1234567890");
    string alph("aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ");
    string::size_type pos = 0;
    cout << "Numeric Character positions: ";
    while ((pos = s.find_first_not_of(alph, pos)) != string::npos ) {
        cout << pos << " ";
        ++pos;
    }
    cout << endl << "Alphabetic Character positions: ";
    pos = 0;
    while ((pos = s.find_first_not_of(num, pos)) != string::npos ) {
        cout << pos << " ";
        ++pos;
    
    }
    cout << endl;

}

int main() {
    edit1("ab2c3d7R4E6");
    cout << endl;
    edit2("ab2c3d7R4E6");
    return 0;
}
