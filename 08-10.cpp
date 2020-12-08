#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::istringstream;
using std::ifstream;

int main() {
    ifstream in("08-10.cpp");
    string line;
    vector<string> vec;
    string str;

    if (in) {
        while(getline(in, line)) {
            vec.push_back(line);
        }

        for (auto s : vec) {
            istringstream strm(s);
            while (strm >> str) {
                cout << str << endl;
            }
        }
    }
    return 0;
}
