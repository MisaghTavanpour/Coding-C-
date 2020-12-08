#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> v{1, 0, 2, 1, 0, 3, 4, 0, 5};
    auto i = find(v.crbegin(), v.crend(), 0);
    cout << *i << " ";
    cout << *++i << endl;
    return 0;
}

/*
result:
0 4
*/
