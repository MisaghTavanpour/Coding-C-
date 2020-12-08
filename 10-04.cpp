// passing 0 (which is is an int) causes accumulate deals with
// num bers in input range as integers. SO, it first demotes them from double
// to int and then it adds them together

#include <iostream>
#include <numeric>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<double> v{0.4, 1, 2.5, 3.6};
    double sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum is " << sum << endl;
    return 0;
}

/*
Sum is 6
*/
