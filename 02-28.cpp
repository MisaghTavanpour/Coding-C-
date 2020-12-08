int main() {
    int i, *const cp;       //cp needs to be initialized
    int *p1, *const p2;     //p2 needs to be initialized
    const int ic, &r = ic;  //ic needs to be initialized
    const int *const p3;    //p3 needs to be initialized
    const int *p;
}

/*
02-28.c:2:19: error: default initialization of an object of const type 'int *const'
    int i, *const cp;
                  ^
                     = nullptr
02-28.c:3:21: error: default initialization of an object of const type 'int *const'
    int *p1, *const p2;
                    ^
                       = nullptr
02-28.c:4:15: error: default initialization of an object of const type 'const int'
    const int ic, &r = ic;
              ^
                 = 0
02-28.c:5:22: error: default initialization of an object of const type 'const int *const'
    const int *const p3;
                     ^
                        = nullptr
4 errors generated.
*/
