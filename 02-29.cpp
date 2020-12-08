int main() {
    int i, *const cp;       //cp needs to be initialized
    int *p1, *const p2;     //p2 needs to be initialized
    const int ic, &r = ic;  //ic needs to be initialized
    const int *const p3;    //p3 needs to be initialized
    const int *p;

    i = ic;     // correct
    p1 = p3;    // error
    p1 = &ic;   // error, p1 is a pointer to int, and cannot point to const int
    p3 = &ic;   // error, p3 itself is a const adn we cannot assign to it.
    p2 = p1;    // error, p2 itself is a const adn we cannot assign to it.
    ic = *p3;   // error, ic itself is a const adn we cannot assign to it.
}

/*
02-29.c:9:10: error: assigning to 'int *' from incompatible type 'const int *const'
    p1 = p3;    // error
         ^~
02-29.c:10:10: error: assigning to 'int *' from incompatible type 'const int *'
    p1 = &ic;   // 
         ^~~
02-29.c:11:8: error: cannot assign to variable 'p3' with const-qualified type 'const int *const'
    p3 = &ic;
    ~~ ^
02-29.c:12:8: error: cannot assign to variable 'p2' with const-qualified type 'int *const'
    p2 = p1;
    ~~ ^
02-29.c:13:8: error: cannot assign to variable 'ic' with const-qualified type 'const int'
    ic = *p3;
    ~~ ^
9 errors generated.

*/
