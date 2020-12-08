struct Foo { /* empty */ } // Note: no semicolon
int main()
{
    return 0;
}

/*
02-39.c:1:27: error: expected ';' after struct
struct Foo { /* empty */ } // Note: no semicolon
                          ^
                          ;
1 error generated.
*/
