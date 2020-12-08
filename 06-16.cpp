#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

bool is_empty(const string& s) { 
    return s.empty();
}

int main() {
    string str = "2";

    cout << str.size() << endl;

    if (is_empty(str)) {
        cout << "str is empty" << endl;
    } else {
        cout << "str is not empty" << endl;
    }
    
    return 0;
}

