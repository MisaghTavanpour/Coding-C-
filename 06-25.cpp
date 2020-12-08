#include <iostream>
#include <string>
#include <vector>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char *argv[]) {
    string s1(argv[1]);
    string s2(argv[2]);
    string str = s1 + s2;
    cout << str << endl;
    return 0;
}
