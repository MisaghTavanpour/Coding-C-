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
    }

    cout << "The number of vowels in the text is " << vowels << endl;
    cout << "The number of spaces in the text is " << spaces << endl;
    cout << "The number of tabs in the text is " << tabs << endl;
    cout << "The number of newLine in the text is " << newLine << endl;
    return 0;
}
/*
Please enter a text:
this	is a 		test.
The number of vowels in the text is 4
The number of spaces in the text is 2
The number of tabs in the text is 3
The number of newLine in the text is 0
*/
