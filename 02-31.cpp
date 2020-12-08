int main() {
    //there is no error
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &v2, &r2 = v2;

    r1 = v2;
    p1 = p2;
    p2 = p1;
    p1 = p3;
    p2 = p3;
}

/*
02-31.c:9:10: error: assigning to 'int *' from incompatible type 'const int *'
    p1 = p2;
         ^~
02-31.c:11:10: error: assigning to 'int *' from incompatible type 'const int *const'
    p1 = p3;
         ^~
2 errors generated.
*/
