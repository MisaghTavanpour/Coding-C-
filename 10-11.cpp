#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void elimDups(vector<string> &words) {
    stable_sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    vector<string> v{"bbb", "aaa", "ccc", "aaa", "aaa", "aa", "b", "b", "ccc", "ccc"};
    for (string i : v) cout << i << " ";
    cout << endl;
    elimDups(v);
    for (string i : v) cout << i << " ";
    cout << endl;
    stable_sort(v.begin(), v.end(), isShorter);
    for (string i : v) cout << i << " ";
    cout << endl;
    return 0;
}
