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

int biggies (vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    vector<string>::iterator it = 
        partition(words.begin(),
                  words.end(),
                  [sz] (string &s) {return (s.size() < sz ? true : false );}
                 );
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
