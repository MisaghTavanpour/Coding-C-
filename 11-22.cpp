#include <vector>
#include <string>
#include <map>
#include <utility>

using namespace std;

int main () {
    vector<int> v{1, 2, 3};
    map<string, vector<int>> m;
    string str = "integers";
    pair<map<string, vector<int>>::iterator, bool> ret = m.insert({str, v});

    return 0;
}
