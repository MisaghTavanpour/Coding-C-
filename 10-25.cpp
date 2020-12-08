#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>

using namespace std;
using namespace std::placeholders;

void elimDups(vector<string> &words) {
    stable_sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool check_size (const string &s, string::size_type sz) {
    return s.size() >= sz;
}

int biggies (vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    vector<string>::iterator it = 
        partition(words.begin(), words.end(), bind(check_size, _1, sz));
    return (words.end() - it);
}

int main() {
    vector<string>::size_type strSize = 5;
    vector<string> v{"bbbbb", "aaaaaaa", "ccc", "aaaaaa", "aaaaaa", "aa", "b", "b", "ccccc", "ccc"};

    for (vector<string>::iterator be = v.begin(); be != v.end(); ++be) cout << *be << " ";
    cout << endl;

    int count = biggies(v, strSize);
    cout << "Number of unique strings with size bigger than " << strSize << " is " << count << endl;

    for (vector<string>::iterator be = v.begin(); be != v.end(); ++be) cout << *be << " ";
    cout << endl;

    return 0;
}
