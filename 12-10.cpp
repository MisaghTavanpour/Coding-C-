//it is correct.

#include <iostream>
#include <memory>

using namespace std;

void process(shared_ptr<int> ptr) {
    cout << "1-  " << *ptr << endl;
    *ptr = 10;
    cout << "2-  " << *ptr << endl;
    cout << "3-  " << ptr.use_count() << endl;
}

int main () {

    shared_ptr<int> p(new int(42));
    process(shared_ptr<int>(p));

    cout << "4-  " << *p << endl;
    cout << "5-  " <<  p.use_count() << endl;
    cout << "6-  " << *p << endl;
    return 0;
}

/*
Output:
1-  42
2-  10
3-  2
4-  10
5-  1
6-  10
*/
