/*
string input remove the white spaces.
getline store them as part of the input string
*/
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string word, line;

/*
    while (getline(cin, line)) {
        cout << line << endl;
    }
*/

    while (cin >> word) {
        cout << word << endl;
    }

    return 0;
}

/*
input:
str1 str2 str3

output:
str1
str2
str3
*/
