#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<string> childName{"aaa", "bbb", "ccc", "ddd"};    
    string familyName = "alph";
    multimap<string,string> fMap;

    for (const string &i : childName) {
        fMap.insert({familyName, i});
    }

    fMap.insert({"Numbers", "111"});
    fMap.insert({"Numbers", "222"});
    fMap.insert({"Numbers", "333"});
    fMap.insert({"Numbers", "444"});
    fMap.insert({"alph", "eee"});
    fMap.insert({"alph", "fff"});

    for (auto &i : fMap) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
