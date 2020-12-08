#include <iostream>
#include <numeric>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> v{0,1,2,3,4,51,3,4,54,2,3,4,1};
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum is " << sum << endl;
    return 0;
}
