#include <vector>
#include <list>

using std::vector;
using std::list;

int main() {

    list<int> l1 = {1, 2, 3, 4, 5};
    vector<int> v1(10, 1);

    vector<double> v2(l1.begin(), l1.end());
    vector<int> v3(v1);
    return 0;
}
