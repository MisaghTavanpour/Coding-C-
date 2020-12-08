#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

void elimDups(list<string> &words)
{
    words.sort();
    words.unique();
}

int main() {
    list<string> v{"bbb", "aaa", "ccc", "aaa", "aaa", "aa", "b", "b", "ccc", "ccc"};
    for (string i : v) cout << i << " ";
    cout << endl;
        elimDups(v);
    for (string i : v) cout << i << " ";
    cout << endl;
    return 0;
}
