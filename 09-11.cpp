#include <vector>

using std::vector;

int main() {

    vector<int> v0;
    vector<int> v1(10);
    vector<int> v2(10, 1);
    vector<int> v3 = {1, 2, 3};
    vector<int> v4 = v2;
    vector<int> v5(v3.begin(), v3.end());
    vector<int> v6(v2);
    return 0;
}
