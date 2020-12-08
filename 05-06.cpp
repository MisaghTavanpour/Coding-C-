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

    (grade == 100) ?  result = "A++" : 
        (grade > 89)   ?  result = "A" :
            (grade > 79)   ?  result = "B" :
                (grade > 69)   ?  result = "C" :
                    (grade > 59)   ?  result = "D" : result = "F";
   
    cout << "This is a " << result << endl;
    return 0;
}
