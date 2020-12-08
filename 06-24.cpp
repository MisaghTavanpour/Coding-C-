#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::size_t;

void print(const int ia[10])        //no error with the function
{
    for (size_t i = 0; i != 10; ++i)
    cout << ia[i] << endl;
}

int main() {
    int ia[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(ia);
    return 0;
}
