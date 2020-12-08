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
    string str1, str2;

    cout << "Please enter the two input strings" << endl;
    cin >> str1 >> str2;

    if (str1 == str2) {
        cout << "Two string are equal" << endl;
    } else if (str1 > str2) {
        cout << "str1 is bigger than str2" << endl;
    } else {
        cout << "str2 is bigger than str1" << endl;
    }

    if (str1.size() == str2.size()) {
        cout << "Two string have a same size" << endl;
    } else if (str1.size() > str2.size()) {
        cout << "str1 size is bigger than str2" << endl;
    } else {
        cout << "str2 size is bigger than str1" << endl;
    }

    return 0;
}
