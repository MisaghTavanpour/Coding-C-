#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    string str;
    vector<string> vstr;
    unsigned counter;

    cin >> str;
    while(str != "end") {
        vstr.push_back(str);
        cin >> str;
    }

    for (auto &str : vstr) {
        for (auto &ch : str) {
            ch = toupper(ch);
        }
    }

    for (auto str : vstr) {
        cout << str << " ";
        counter++;
        if (counter == 8) {
            cout << endl;
            counter = 0;
        }       
    }

    cout << endl;
    return 0;
}
