#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int grade;
    string result;

    cout << "Please enter the grade: ";
    cin >> grade;

    if (grade == 100) {
        result = "A++";
    } else if (grade > 89) {        
        result = "A";
    } else if (grade > 79) {        
        result = "B";
    } else if (grade > 69) {        
        result = "C";
    } else if (grade > 59) {        
        result = "D";
    } else {
        result = "F";
    }
    cout << "This is a " << result << endl;
    return 0;
}
