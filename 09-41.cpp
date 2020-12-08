#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    vector<char> c{'a', 'b', 'c', 'd'};
    string str(&c[0], c.size());

    cout << str << endl;

    return 0;
}
