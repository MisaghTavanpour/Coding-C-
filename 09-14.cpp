#include <vector>
#include <list>
#include <string>
#include <iostream>

using std::vector;
using std::list;
using std::string;

int main() {

    list<char *> l1 = {"hello", "world"};
    vector<string> v1;

    v1.assign(l1.begin(), l1.end());
    
    for (auto i : v1) std::cout << i << std::endl;
    return 0;
}
