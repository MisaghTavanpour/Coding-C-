#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string (&fill(string (&a)[10])) [10] {
    string (&r)[10] = a; 
    for (string &i : a){
        i = "a";
    }
    return r;
}

int main() {
    const int size(10);
    string strArray[10]{"aa", "bb", "cc", "dd", "ff"};

    string (&r)[10] = fill(strArray);

    for (int i = 0; i < size; ++i) {
        cout << *(r + i) << endl;
    }

    return 0;
}
