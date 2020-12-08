/*
iter is a vector<string>::iterator

(a) *iter++;          // increase iter by 1
(b) (*iter)++;        // error
(c) *iter.empty()     // error 
(d) iter->empty();    //
(e) ++*iter;          // error
(f) iter++->empty();  // increase iter by 1, and then check if the string is empty
*/

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<string> vec = {"abc", "def", "ghi", "jkl", "mno"};
    
    vector<string>::iterator iter;
    iter = vec.begin();

    *iter++;
    (*iter)++;
    *iter.empty()
    iter->empty();
    ++*iter;
    iter++->empty();
}
/*
04-20.c:28:12: error: cannot increment value of type 'std::__1::basic_string<char>'
    (*iter)++;
    ~~~~~~~^
04-20.c:29:10: error: no member named 'empty' in
      'std::__1::__wrap_iter<std::__1::basic_string<char> *>'; did you mean to use '->'
      instead of '.'?
    *iter.empty()
         ^
         ->
04-20.c:29:5: error: indirection requires pointer operand ('int' invalid)
    *iter.empty()
    ^~~~~~~~~~~~~
04-20.c:31:5: error: cannot increment value of type 'std::__1::basic_string<char>'
    ++*iter;
    ^ ~~~~~
4 errors generated.
*/
