#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str, oldStr = "";
    bool same = false;

    cout << "Please enter the input strings:" << endl;
    while ( getline(cin, str) && (str != "")) {
        if (!isupper(str[0])) continue;
        if (str == oldStr) {
            cout << str << " repeated twice in row!" << endl;
            same = true;
            break;
        }

        oldStr = str;
    }

    if (!same) {
        cout << "No word repeated twice in row!" << endl;
    }
    return 0;
}
