#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;

int main() {
    vector<int> vec; list<int> lst; int i;
    
    //a
    while (cin >> i) lst.push_back(i);
    copy(lst.cbegin(), lst.cend(), vec.begin());  //compiled, but vec size is 0, cannot copy
                                                  //from non-zero size list into zero size vec.
    //b
    vec.reserve(10);
    fill_n(vec.begin(), 10, 0); //compiled, but reserve does not mean that vector size is 10 too!
                                //actually, the vector size is 0.
   
    return 0;
}
