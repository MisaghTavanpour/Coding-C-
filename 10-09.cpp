#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

int main() {
    vector<string> v{"bbb", "aaa", "ccc", "aaa", "aaa", "aa", "b", "b", "ccc", "ccc"};
    for (string i : v) cout << i << " ";
    cout << endl;
        elimDups(v);
    for (string i : v) cout << i << " ";
    cout << endl;
    return 0;
}
