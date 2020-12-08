#include <iostream>
#include <vector>

using namespace std;

vector<int> * create () {
    return (new vector <int>);
}

void init (vector<int> *v) {
    int i;
    while (cin >> i) {
        (*v).push_back(i);
    }
}

void print (vector <int> *v) {
    for (int i : *v) {
        cout << i << " ";
    }
    cout <<  endl;
}

int main() {
    vector <int> *p = create();
    init(p);
    print(p);
    delete p;
}
