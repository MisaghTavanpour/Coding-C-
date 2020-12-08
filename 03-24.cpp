#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int num;
    vector<int> vint;
    unsigned counter;

    cout << "Please enter the list of the integers" << endl;
    while(cin >> num) {
        vint.push_back(num);
    }

    cout << "Section A" << endl;
    for (auto it = vint.begin(); it < vint.end(); it = it + 2) {
        if ((it + 1) < vint.end()) {
            cout << *it + *(it + 1) << " ";
        } else {
            cout << *it << " ";
        }
    }
    cout << endl;

    cout << "Section B" << endl;
    auto i = vint.begin();
    auto j = vint.end();
    while (i < j) {
        j--;
        cout << *i + *j << endl;
        i++;
    }
    cout << endl;

    return 0;
}
