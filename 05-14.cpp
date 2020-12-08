#include <iostream>
#include <string>
#include <vector>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    string str = "";
    string oldStr = "";
    string mostRepeatedStr = "";
    int    count = 0;
    int    mostRepeatedStrCounter = 0;

    cout << "Please enter the strings:" << endl;
    while (getline(cin, str) && (str != "")) {
        if (str == mostRepeatedStr) {
            ++mostRepeatedStrCounter;
        } else {
            if (str == oldStr) {
                ++count;
            } else {
                oldStr = str;
                count = 1;
            }

            if (count > mostRepeatedStrCounter) {
                mostRepeatedStrCounter = count;
                mostRepeatedStr = str;
            }
        }
    }

    if (count != 0) {
        cout << mostRepeatedStr << " repeated " << mostRepeatedStrCounter << " times." << endl; 
    } else {
        cout << "There were no input!!!" << endl;
    }

    return 0;
}
