#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

int main() {
    vector<string> tmp;
    vector<string> book{"aaa", "vvv", "ccc", "ddd"};    
    string author = "alph", oldAuthor, newAuthor;
    multimap<string, string> fMap;
    multimap<string, string>::iterator it;

    for (const string &i : book) {
        fMap.insert({author, i});
    }

    fMap.insert({"Numbers", "111"});
    fMap.insert({"signed", "-222"});
    fMap.insert({"double", "3.33"});
    fMap.insert({"Numbers", "444"});
    fMap.insert({"double", "1.23"});
    fMap.insert({"alph", "fff"});

    if(fMap.begin() != fMap.end()) {
        it = fMap.begin();
        newAuthor = it->first;
        while (it != fMap.end()) {
            oldAuthor = newAuthor;
            while (newAuthor == oldAuthor && it != fMap.end()) {
                tmp.push_back(it->second);
                ++it;
                newAuthor = it->first;                
            }
            sort(tmp.begin(), tmp.end());
            cout << oldAuthor << ": ";
            for (auto i : tmp) {
                cout << i << " ";
            }
            cout << endl;
            tmp.clear();
        }
    }

    return 0;
}
