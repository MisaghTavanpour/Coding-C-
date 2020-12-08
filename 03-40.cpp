#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
    char c1[] = "Misagh";
    char c2[] = "Tavanapour";
    char c3[strlen(c1) + strlen(c2) + 1]; 

    strcpy(c3, c1);
    strcat(c3, c2);

    cout << c3 << endl;
    cout << strlen(c1) << endl;
    cout << strlen(c2) << endl;
    cout << strlen(c3) << endl;

    return 0;
}

/*
MisaghTavanapour
6
10
16
*/
