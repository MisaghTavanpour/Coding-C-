#include <string>
#include <vector>

using std::string;
using std::vector;

int main() {
    vector<vector<int>> ivec;
    vector<string> svec = ivec;          //error
    vector<string> svec1(10, "null");
}


/*
03-12.c:9:20: error: no viable conversion from 'vector<vector<int>>' to 'vector<std::__1::string>'
    vector<string> svec = ivec;
                   ^      ~~~~
*/
