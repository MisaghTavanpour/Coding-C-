int main() {
    int i1 = -1, &r1 = 0;      //error on r1

    int i2 = 1;
    int *const p2 = &i2;

    const int i3 = -1, &r2 = 0;
    const int *const p3 = &i3;
    const int *p4 = &i3;
    const int &const r3;    // error on r3
    const int i4 = i1, &r4 = i1;
}

/*
02-27.c:2:19: error: non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'
    int i1 = -1, &r1 = 0;
                  ^    ~
02-27.c:10:16: error: 'const' qualifier may not be applied to a reference
    const int &const r3;
               ^
02-27.c:10:22: error: declaration of reference variable 'r3' requires an initializer
    const int &const r3;
                     ^~
3 errors generated.
*/
