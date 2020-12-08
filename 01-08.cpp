#include <iostream>

int main () {

    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;

    return 0;
} 

// Result shows that only lines 7 is incorrect.

// > g++ 01-08.c -o 01-08.exe 
// 01-08.c:7:24: warning: missing terminating '"' character [-Winvalid-pp-token]
//     std::cout << /* "*/" */;
//                        ^
// 01-08.c:7:24: error: expected expression
// 1 warning and 1 error generated.
