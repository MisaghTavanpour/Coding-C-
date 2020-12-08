/* range based for seems to be more cleaner approch for such a purpose */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str;
    unsigned i = 0;

    cout << "Please enter the input string" << endl;
    cin >> str;

    while (i < str.size()){
        str[i] = 'X';
        i++;
    }

    /*
    for (int j = 0; j < str.size(); j++){
        str[i] = 'X';
    }
    */

    cout << str << endl;
    return 0;
}
