#include <iostream>
#include <memory>

using namespace std;

void process(shared_ptr<int> ptr) {
    cout << "*ptr          = " << *ptr << endl;
    *ptr = 10;
    cout << "*ptr          = " << *ptr << endl;
    cout << "ptr.use_count = " << ptr.use_count() << endl;
}

int main () {

    auto p = new int();
    auto sp = make_shared<int>();

    process(sp);                        // a)
    //process(new int());               // b)
    //process(p);                       // c)
    //process(shared_ptr<int>(p));      // d)

    cout << "*p            = " << *p << endl;
    cout << "*sp           = " << *sp << endl;
    cout << "sp.use_count  = " <<  sp.use_count() << endl;
    return 0;
}
/*


a)
*ptr          = 0
*ptr          = 10
ptr.use_count = 2
*p            = 0
*sp           = 10
sp.use_count  = 1



b)
12-12.cpp:19:5: error: no matching function for call to 'process'
    process(new int());
    ^~~~~~~
12-12.cpp:6:6: note: candidate function not viable: no known conversion from 'int *' to
      'shared_ptr<int>' for 1st argument
void process(shared_ptr<int> ptr) {
     ^
1 error generated.



c)
12-12.cpp:20:5: error: no matching function for call to 'process'
    process(p);
    ^~~~~~~
12-12.cpp:6:6: note: candidate function not viable: no known conversion from 'int *' to
      'shared_ptr<int>' for 1st argument
void process(shared_ptr<int> ptr) {
     ^
1 error generated.



d)
*ptr          = 0
*ptr          = 10
ptr.use_count = 1
*p            = 0
*sp           = 0
sp.use_count  = 1


*/

