#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<string> childName{"aaa", "bbb"};
    string familyName = "alph";
    map<string,string> fMap;

    for (const string &i : childName) {
        fMap.insert({familyName, i});
    }

    fMap.insert({"Numbers", "111"});
    fMap.insert({"Numbers", "222"});
    fMap.insert({"double", "3.33"});
    fMap.insert({"alph", "eee"});

    for (auto &i : fMap) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
