#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int sum(int a, int b) {return a + b;}

int main() {
    int (*fp)(int, int);
    fp = sum;    
    cout << fp(3, 7) << endl;

    vector<int (*)(int, int)> fpv;
    fpv.push_back(fp);
    cout << fpv[0](3, 7) << endl;

    return 0;
}
