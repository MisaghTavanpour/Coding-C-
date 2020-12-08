#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool isAllLowerCase(const string& s) { 
    for (auto c : s) {
        if (isupper(c)) {
            return true;
        }
    }
    
    return false;
}

void toAllLower(string& s) {    //no const since we may change the value
    for (auto &c : s) {
        if (isupper(c)) {
            c = tolower(c);
        }
    } 
}

int main() {
    string str;

    cout << "Please enter a string: " << endl;
    cin >> str;
    
    if (isAllLowerCase(str)) {
        cout << str << " has upper case letter" << endl;
    } else {
        cout << str << " has no upper case letter" << endl;
    }
    
    toAllLower(str);
    cout << str << endl;
    return 0;
}

