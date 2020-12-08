#include <iostream>

using std::cout;
using std::endl;
using std::initializer_list;

void sumInt(initializer_list<int> li) {
    int sum = 0;
    for (auto i : li) {
        sum += i;
    }
    
    cout << "The sum of the numbers is: " << sum << endl;
}

int main() {
    sumInt({});
    sumInt({1});
    sumInt({1, 2, 3});
    return 0;
}
