#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> create () {
    vector<int> v;
    shared_ptr<vector <int>> p =make_shared<vector<int>>(v);
    return p;
}

void init (shared_ptr<vector<int>> p) {
    int i;
    while (cin >> i) {
        p->push_back(i);
    }
}

void print (shared_ptr<vector <int>> p) {
    for (int i : *p) {
        cout << i << " ";
    }
    cout <<  endl;
}

int main() {
    shared_ptr<vector <int>> p = create(); 
    init(p);
    print(p);
}
