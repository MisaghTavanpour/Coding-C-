#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

int main() {
    vector<string> book{"aaa", "bbb", "ccc", "ddd"};    
    string author = "alph";
    multimap<string, string> fMap;

    for (const string &i : book) {
        fMap.insert({author, i});
    }

    fMap.insert({"Numbers", "111"});
    fMap.insert({"signed", "-222"});
    fMap.insert({"double", "3.33"});
    fMap.insert({"Numbers", "444"});
    fMap.insert({"double", "1.23"});
    fMap.insert({"alph", "fff"});

    for (auto &i : fMap) {
        cout << i.first << " " << i.second << endl;
    }

    multimap<string, string>::iterator it = fMap.find("Numbers");
    fMap.erase(it);

    cout << endl << endl;

    for (auto &i : fMap) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
