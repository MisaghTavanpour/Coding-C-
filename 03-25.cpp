#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int num;
    vector<int> vint;
    vector<int> score(10,0);

    cout << "Please enter the grades between [0, 100]" << endl;
    while(cin >> num) {
        if (num >= 0 && num <= 100) {
            vint.push_back(num);
        }
    }

    for (auto it = vint.begin(); it != vint.end(); it++) {
        score[*it / 10]++;
    }

    
    for (auto it = score.begin(); it != score.end(); it++) {
        cout << "score[" << (it - score.end()) + 10 << "] = " << *it << endl;
    }

    return 0;
}
