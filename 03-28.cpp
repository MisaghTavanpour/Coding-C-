#include <iostream>
#include <string>

using std::string;

string sa[10];
int ia[10];

int main() {
    string sa2[10];
    int ia2[10];

    for (int i = 0; i < 10; i++) {
        std::cout << sa[i] << ", " << ia[i] << ", " << sa2[i] << ", " << ia2[i] << std::endl;
    } 
}

/*
, 0, , 0
, 0, , 0
, 0, , 0
, 0, , 0
, 0, , 0
, 0, , 0
, 0, , 0
, 0, , 0
, 0, , 0
, 0, , 0
*/
