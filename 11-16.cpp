#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

int main() {
    multimap<string, string> m{{"ab", "AB"}};
    multimap<string, string>::iterator it = m.begin();
    
    it->second = "CD";

    cout << it->first << " " << it->second << endl;
    return 0;
}
