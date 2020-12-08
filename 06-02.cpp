(a)
int f() {
    string s;
    // ...
    return s;     //error, return type is int
}

(b)
f2(int i) { /* ... */ } // function need a return type, it can be 'void'

(c)
int calc(int v1, int v1) /* ... */ }        //error, missing '{'


(d)
double square(double x) return x * x;  //error, function body should be between {}
