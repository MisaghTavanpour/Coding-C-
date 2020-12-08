#include <iostream>
#include <iterator>
#include <vector>
#include <numeric>
#include <fstream>

using namespace std;

int main() {
    ifstream in("10-29.cpp");
    vector<string> vec;
    istream_iterator<string> str_in(in), eof; 
    ostream_iterator<string> str_out(cout, "\n"); 

    if (in) {
        while(str_in != eof) {
            vec.push_back(*str_in++);
        }
    }

    for (auto i : vec) {
        str_out = i;
    }

    return 0;
}
