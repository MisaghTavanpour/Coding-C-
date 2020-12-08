#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int num, i, j;
    vector<int> vint;
    unsigned counter;

    cout << "Please enter the list of the integers" << endl;
    while(cin >> num) {
        vint.push_back(num);
    }

    cout << "Section A" << endl;
    for (int i = 0; i < vint.size(); i = i + 2) {
        if ((i + 1) < vint.size()) {
            cout << vint[i] + vint[i+1] << " ";
        } else {
            cout << vint[i] << " ";
        }
    }
    cout << endl;

    cout << "Section B" << endl;
    i = 0, j = vint.size() - 1;
    while (i <= j) {
        cout << (vint[i] + vint[j]) << endl;
        i++;
        j--;
    }
    cout << endl;

    return 0;
}
