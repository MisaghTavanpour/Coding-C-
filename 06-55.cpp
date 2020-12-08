#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int myAdd(int a, int b) {return a + b;}
int mySub(int a, int b) {return a - b;}
int myMul(int a, int b) {return a * b;}
int myDiv(int a, int b) {return a / b;}

int main() {
    vector<int (*)(int, int)> fpv = {myAdd, mySub, myMul, myDiv};

    cout << fpv[0](10, 2) << endl;
    cout << fpv[1](10, 2) << endl;
    cout << fpv[2](10, 2) << endl;
    cout << fpv[3](10, 2) << endl;

    return 0;
}
