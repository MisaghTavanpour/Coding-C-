#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <iterator>

using namespace std;

int main() {
    vector<string> v{"aaa", "bbb", "ccc"};
    multiset<string> c;

    copy(v.begin(), v.end(), inserter(c, c.end())); //OK
    copy(v.begin(), v.end(), back_inserter(c));     //ERROR
    copy(c.begin(), c.end(), inserter(v, v.end())); //OK
    copy(c.begin(), c.end(), back_inserter(v));     //OK

    return 0;
}
