#include <iostream>
#include <string>
#include <forward_list>

using std::cout;
using std::endl;
using std::string;
using std::forward_list;

int main() {
    forward_list<string> fl{"abc", "def", "hij", "lmn"};
    forward_list<string>::iterator prev, curr;
    string str1 = "abc", str2 = "rrr";
    
    prev = fl.before_begin();    
    curr = fl.begin();
    while(curr != fl.end()) {
        if (*curr == str1) {
            curr = fl.insert_after(curr, str2);
            break;
        } else {
            prev = curr;
            ++curr;
        }
    }

    if (curr == fl.end()) {
        curr = fl.insert_after(prev, str2);
    }
      

    for (auto i : fl) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
