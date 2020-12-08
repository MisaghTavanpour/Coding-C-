#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str, sumWithNoSpace = "", sumWithSpace = "";

    cout << "Please enter the input strings" << endl;
    while (cin >> str) {
        sumWithNoSpace =sumWithNoSpace  + str;
        sumWithSpace = sumWithSpace + str + " ";
        cout << sumWithNoSpace << endl;
        cout << sumWithSpace << endl;
    }

    return 0;
}
