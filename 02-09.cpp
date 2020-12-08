/*
(a) std::cin >> int input_value;     --> error
(b) int i = { 3.14 };                --> error
(c) double salary = wage = 9999.99;  --> error
(d) int i = 3.14;                    --> warning
*/

#include <iostream>

int main () {
    std::cin >> int input_value;
    int i = { 3.14 };
    double salary = wage = 9999.99;
    int j = 3.14;
}

/*
02-09.c:11:21: error: expected '(' for function-style cast or type construction
    std::cin >> int input_value;
                ~~~ ^
02-09.c:12:15: error: type 'double' cannot be narrowed to 'int' in initializer list [-Wc++11-narrowing]
    int i = { 3.14 };
              ^~~~
02-09.c:12:15: note: insert an explicit cast to silence this issue
    int i = { 3.14 };
              ^~~~
              static_cast<int>( )
02-09.c:12:15: warning: implicit conversion from 'double' to 'int' changes value from 3.14 to 3
      [-Wliteral-conversion]
    int i = { 3.14 };
            ~ ^~~~
02-09.c:13:21: error: use of undeclared identifier 'wage'
    double salary = wage = 9999.99;
                    ^
02-09.c:14:13: warning: implicit conversion from 'double' to 'int' changes value from 3.14 to 3
      [-Wliteral-conversion]
    int j = 3.14;
        ~   ^~~~
2 warnings and 3 errors generated.
*/
