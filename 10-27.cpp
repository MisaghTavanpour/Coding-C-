#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>

using namespace std;

void uniqueCopy(vector<string> &words, list<string> &li) {
    stable_sort(words.begin(), words.end());
    unique_copy(words.begin(), words.end(), li.begin());
}

int main() {
    vector<string>::size_type strSize = 5;
    vector<string> v{"abcd", "abcde", "abcde", "abc", "abcd", "a", "ab", "ab", "abcd", "abc"};
    list<string> li(v.size(),"");

    for (auto i : v) {
        cout << i << " ";
    }

    cout << endl;
    uniqueCopy(v, li);

    for (auto i : li) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
