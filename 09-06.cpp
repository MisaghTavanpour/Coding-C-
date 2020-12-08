#include <iostream>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::list;

int main() {

    list<int> lst1;
    list<int>::iterator iter1 = lst1.begin(),
                        iter2 = lst1.end();
//    while (iter1 < iter2) {}    // error, '<' canot be applied to a list. 
    while (iter1 != iter2) {} 

    return 0;
}
