/*
int *ptr
vector<int> vec
int ival

ptr != 0 && *ptr++        // if *ptr != 0, then true, otherwise false
                          // and ptr will point to next memeory address

ival++ && ival            // if val is 0, then false because left side of && will be 0
                          // if val is -1, then false because right side of && will be 0
                          // for the rest of integers it is true

vec[ival++] <= vec[ival]  // if ival < 0 or ival > vec.size(), then vec[ival] is wrong.
*/

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {

    vector<int> vec = {0,1,2,3,4,5};
    int *ptr = &vec[0];
    int ival = 0;

    if (ptr != 0 && *ptr++) {
        cout << "ptr != 0 && *ptr++  --> ture" << endl;
    }
    cout << *ptr << endl;

    if (ival++ && ival) {
        cout << "ival++ && ival  --> ture" << endl;
    }
    cout << ival << endl;

    ival = 4;
    if (vec[ival++] <= vec[ival]) {
    //if (ival >= 0 && ival < vec.size() && vec[ival++] <= vec[ival]) {
        cout << "vec[ival++] <= vec[ival]" << endl;
    }
    cout << vec[ival] << endl;

    return 0;
}
/*
1
1
vec[ival++] <= vec[ival]
5
*/
