#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
    string s1 = "Misagh";
    string s2 = "Tavanpour";

    char c1[] = {'M', 'i'};
    char c2[] = {'T', 'a'};
    int result;

    if (s1 == s2) {
        cout << "s1 and s2 are equal." << endl;
    } else if (s1 > s2) {            
        cout << "s1 is bigger than s2." << endl;
    } else {
        cout << "s2 is bigger than s1." << endl;
    }

    result = strcmp(c1, c2);
    if (result == 0) {
        cout << "c1 and c2 are equal." << endl;
    } else if (result > 0) {            
        cout << "c1 is bigger than c2." << endl;
    } else {
        cout << "c2 is bigger than c1." << endl;
    }

    return 0;
}

/*
s2 is bigger than s1.
c2 is bigger than c1.
*/
