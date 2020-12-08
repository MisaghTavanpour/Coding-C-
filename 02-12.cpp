int main () {
    int double = 3.14;      --> wrong, used a reserved word
    int _;
    int catch-22;           --> wrong, has '-' in it.
    int 1_or_2 = 1;         --> wrong, started with a number
    double Double = 3.14;    
}

/*
02-12.c:2:9: error: cannot combine with previous 'int' declaration specifier
    int double = 3.14;
        ^
02-12.c:2:16: error: expected unqualified-id
    int double = 3.14;
               ^
02-12.c:4:9: error: expected unqualified-id
    int catch-22;
        ^
02-12.c:5:9: error: expected unqualified-id
    int 1_or_2 = 1;
        ^
4 errors generated.
*/
