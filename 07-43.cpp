#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

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
    C myC{10, 20};
    
    return 0;
}
