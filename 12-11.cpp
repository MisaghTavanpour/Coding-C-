//This is wrong.
//p.get() returns a built-in pointer to the object a shared_ptr managing.
//passing a built-in pointer to 'process' will not increase the shared_ptr counter,
//since it cannot convert int * into a shared_ptr<int>. Therefore, 'process' deals with
//'ptr' as a built-in pointer, and when 'process' is done and it wants to returns,
// the 'ptr' and the object it points at will be deleted. 
//This makes 'p' pointer at the 'main' function to be a dangling pointer.

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
    process(shared_ptr<int>(p.get()));

    cout << "4-  " << *p << endl;
    cout << "5-  " <<  p.use_count() << endl;
    cout << "6-  " << *p << endl;

    return 0;
}

/*
1-  42
2-  10
3-  1
4-  0
5-  1
6-  0
00.out(14447,0x7fffa1033380) malloc: *** error for object 0x7fb90bc026d0: pointer being freed was not allocated
*** set a breakpoint in malloc_error_break to debug
Abort trap: 6
*/
