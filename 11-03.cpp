#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, unsigned int> words;
    string str;

    while (cin >> str) {
        ++words[str];
    }

    for(auto i : words) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
