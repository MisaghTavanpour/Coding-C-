#include <iostream>
#include <iterator>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("input-ch10.txt");
    ofstream odd("odd-ch10.txt");
    ofstream even("even-ch10.txt");
   
    istream_iterator<int> in(inFile), eof;
    ostream_iterator<int> o(odd);
    ostream_iterator<int> e(even);
    while (in != eof) {
        (*in % 2 == 1) ? (o = *in) : (e = *in);
        ++in;
    }
    
    return 0;
}
