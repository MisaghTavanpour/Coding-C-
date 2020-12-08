#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool str_subrange(const string &, const string &);

int main() {

    return 0;
}

bool str_subrange(const string &str1, const string &str2) {
    if (str1.size() == str2.size())
        return str1 == str2; // ok: == returns bool
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i])
            return; // error #1: no return value; compiler should detect this error
    }
    // error #2: control might flow off the end of the function without a return
    // the compiler might not detect this error
}

/*
06-30.c:22:13: error: non-void function 'str_subrange' should return a value
      [-Wreturn-type]
            return; // error #1: no return value; compiler should detect this error
            ^
1 error generated.
*/

// fix the first error then compile again

/*
06-30.c:26:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.
*/
