#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str;
    int vowels = 0;
    int spaces = 0;
    int tabs = 0;
    int newLine = 0;
    int ff = 0;
    int fl = 0;
    int fi = 0;

    cout << "Please enter a text:" << endl;
    getline(cin, str);

    for (int i = 0; i < str.size(); ++i) {
        str[i] = tolower(str[i]);
        if (str[i] == 'a') ++vowels;
        if (str[i] == 'e') ++vowels;
        if (str[i] == 'i') ++vowels;
        if (str[i] == 'o') ++vowels;
        if (str[i] == 'u') ++vowels;
        if (str[i] == ' ') ++spaces;
        if (str[i] == '\t') ++tabs;
        if (str[i] == '\n') ++newLine;
        if (i + 1 < str.size() && str[i] == 'f') {
            if (str[i + 1] == 'f') ++ff;
            if (str[i + 1] == 'l') ++fl;
            if (str[i + 1] == 'i') ++fi;
        }
    }

    cout << "The number of vowels in the text is " << vowels << endl;
    cout << "The number of spaces in the text is " << spaces << endl;
    cout << "The number of tabs in the text is " << tabs << endl;
    cout << "The number of newLine in the text is " << newLine << endl;
    cout << "The number of ff in the text is " << ff << endl;
    cout << "The number of fl in the text is " << fl << endl;
    cout << "The number of fi in the text is " << fi << endl;
    return 0;
}
/*
Please enter a text:
This is a TEST.			ff fi ff are some random inputs.
The number of vowels in the text is 13
The number of spaces in the text is 9
The number of tabs in the text is 3
The number of newLine in the text is 0
The number of ff in the text is 2
The number of fl in the text is 0
The number of fi in the text is 1
*/
