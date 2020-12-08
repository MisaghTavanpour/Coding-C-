#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    map<string, unsigned int> words;
    string str;
    vector<string> exclude {"The", "But", "And", "Or", "An", "A",
                            "the", "but", "and", "or", "an", "a"};

    while (cin >> str) {
        if (find(exclude.begin(), exclude.end(), str) == exclude.end()) {
            ++words[str];
        }
    }

    for(auto i : words) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
