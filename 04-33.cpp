/*
someValue ? ++x, ++y : --x, --y;
is equal to:
(someValue ? ++x, ++y : --x), --y;

if someValue get evaluated to true, then
++x, ++y expression is executed, followed by the expression --y.
otherwise,
--x expression is executed, followed by the expression --y.

*/


#include <iostream>


using std::cout;
using std::endl;

int main() {
    int someValue = 0, x = 0, y = 0;
    someValue ? ++x, ++y : --x, --y;
    cout << x << " " << y << endl;

    someValue = 1; x = 0; y = 0;
    someValue ? ++x, ++y : --x, --y;
    cout << x << " " << y << endl;
    return 0;
}
/*
-1 -1
1 0
*/
