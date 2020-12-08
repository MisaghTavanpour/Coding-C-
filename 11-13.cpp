#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main() {
    pair<string, int> p;
    vector<pair<string, int>> v;

    cout << "V1" << endl;    
    while (cin >> p.first >> p.second) {
        v.push_back(p);
    }    


    cout << "V2" << endl;
    string str;
    int in;
    while (cin >> str >> in) {
        v.push_back(make_pair(str, in));
    }  


    cout << "V3" << endl;
    while (cin >> str >> in) {
        v.push_back({str, in});
    } 

    for (auto i : v) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
