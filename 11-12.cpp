#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main() {
    pair<string, int> p;
    vector<pair<string, int>> v;
    
    while (cin >> p.first >> p.second) {
        v.push_back(p);
    }    

    for (auto i : v) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
