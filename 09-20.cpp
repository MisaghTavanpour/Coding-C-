#include <iostream>
#include <list>
#include <string>
#include <deque>

using std::deque;
using std::list;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    list<int> l{0,1,2,3,4,5,6,7,8,9};
    deque<int> qe, qo;

    for (auto i : l) {
        if (i % 2 == 0) {
            qe.push_back(i);
        } else {
            qo.push_back(i);
        }
    }

    for (auto i : qe) {
        cout << i << " ";
    }

    cout << endl;
    for (auto i : qo) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
