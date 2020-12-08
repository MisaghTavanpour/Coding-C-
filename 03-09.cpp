/* It is not valid to use s[0], while s.size == 0. However the below code got compiled */

#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
    string s;

    cout << s[0] << "," << s.size() << endl;
}
