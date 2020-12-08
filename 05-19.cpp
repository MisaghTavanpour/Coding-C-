#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string s1, s2;

    do {
        cout << "Please enter the two strings:" << endl;
        cin >> s1 >> s2;
        if (s1 < s2) {
            cout << "s1 is less than s2" << endl;
        } else if (s1 > s2) {
            cout << "s2 is less than s1" << endl;
        } else {
            cout << "s1 and s2 are same" << endl;
        }
    } while (cin);

    return 0;
}
