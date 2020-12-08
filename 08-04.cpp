#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;

int main() {
    vector<string> vec;
    string str;

    ifstream in("08-04.cpp");
    if (in) {
        while (getline(in, str)) {
            vec.push_back(str);
        }
    }

    for (auto i : vec) {
        cout << i << endl;
    }

    return 0;
}
