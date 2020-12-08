#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class NoDefault {
    int i;

    public:
        NoDefault(int input) : i(input) {}
};

int main() {    
    vector<NoDefault> vec(10);  //error: no matching constructor for initialization of 'NoDefault'
    
    return 0;
}
