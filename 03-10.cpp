#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str;

    cout << "Please enter the input string" << endl;
    cin >> str;
    for (auto c : str) {
        if (!ispunct(c)) {
            cout << c;
        }
    }
    cout << endl;
    return 0;
}
