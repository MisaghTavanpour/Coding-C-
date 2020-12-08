#include <iostream>
#include <memory>

using namespace std;

int main () {    
    unique_ptr<int> p1(new int(10));
    unique_ptr<int> p2;
    p2 = p1;
    return 0;
}

/*
12-16.cpp:9:8: error: object of type 'std::__1::unique_ptr<int, std::__1::default_delete<int> >' cannot
      be assigned because its copy assignment operator is implicitly deleted
    p2 = p1;
       ^
/Library/Developer/CommandLineTools/usr/include/c++/v1/memory:2440:3: note: copy assignment operator is
      implicitly deleted because 'unique_ptr<int, std::__1::default_delete<int> >' has a user-declared
      move constructor
  unique_ptr(unique_ptr&& __u) noexcept
  ^
1 error generated.
*/

