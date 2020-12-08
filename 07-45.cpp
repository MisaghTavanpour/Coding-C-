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

class C {
    NoDefault def;
    int cInt;

    public:
        C() = default;
        C(NoDefault d, int j) : def(d), cInt(j) {}
};

int main() {    
    vector<C> vec(10);  //error
    
    return 0;
}

/*
07-45.cpp:19:15: note: default constructor of 'C' is implicitly deleted because field 'def' has no
      default constructor
    NoDefault def;
              ^
1 error generated.
*/
