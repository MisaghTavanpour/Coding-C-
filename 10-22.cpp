#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool isBigEq (string &words, vector<string>::size_type sz) {
    return (words.size() >= sz ? true : false);
}

int main() {
    string str;
    unsigned int size = 6;
    unsigned int count = 0;
    auto countStr = bind(isBigEq, _1, size);

    while (cin >> str) {
        if (countStr(str, size)) ++count;
    }

    cout << "Number of strings with size bigger or equal than " << size << " is " << count << endl;
    return 0;
}
