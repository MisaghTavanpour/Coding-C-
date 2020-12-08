#include <iostream>
#include <vector>
#include <forward_list>

using std::cout;
using std::endl;
using std::forward_list;

int main() {
    forward_list<int> fl{0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    forward_list<int>::iterator prev, curr;
    
    prev = fl.before_begin();    
    curr = fl.begin();
    while(curr != fl.end()) {
        if (*curr % 2 == 1) {
            curr = fl.erase_after(prev);
        } else {
            prev = curr;
            ++curr;
        }
    }

    for (auto i : fl) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
