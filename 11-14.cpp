#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>

using namespace std;

int main() {
    vector<pair<string, string>> child {
                                         {"aaa", "01/01/1000"},
                                         {"bbb", "02/02/2000"},
                                         {"ccc", "03/03/3000"},
                                         {"ddd", "04/04/4000"}
                                       };    
    string familyName = "alph";
    multimap<string,pair<string, string>> fMap;

    for (auto &i : child) {
        fMap.insert({familyName, i});
    }

    for (auto &i : fMap) {
        cout << i.first << " " << i.second.first << " " << i.second.second << endl;
    }

    return 0;
}
