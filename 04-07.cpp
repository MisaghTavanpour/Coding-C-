/*
"Overflow happens when a value is computed that is outside the range of values that the type can represent."

    short var1 = 32767;

    var1++;
    var1 / 0;
    var1 * 10;
*/

#include <iostream>

using std::cout;
using std::endl;

int main() {
    short var1 = 32767;
    var1++;

    cout << var1 << endl;
}

/*
-32768
*/
