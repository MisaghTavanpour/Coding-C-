#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str;
    int counter = 0;

    cout << "Please enter a text:" << endl;
    getline(cin, str);

    for (int i = 0; i < str.size(); ++i) {
        str[i] = tolower(str[i]);
        if (str[i] == 'a') ++counter;
        if (str[i] == 'e') ++counter;
        if (str[i] == 'i') ++counter;
        if (str[i] == 'o') ++counter;
        if (str[i] == 'u') ++counter;
    }

    cout << "The number of vowels in the text is " << counter << endl;
    return 0;
}
/*
Please enter a text:
THIs IS a test.
The number of vowels in the text is 4
*/
