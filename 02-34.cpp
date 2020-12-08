int main() {
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i; 
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;

    a = 42; 
    b = 42;
    c = 42;
    d = 42;
    e = 42;
    g = 42;
}

/*
02-33.c:15:9: error: assigning to 'int *' from incompatible type 'int'
    d = 42;
        ^~
02-33.c:16:9: error: assigning to 'const int *' from incompatible type 'int'
    e = 42;
        ^~
02-33.c:17:7: error: cannot assign to variable 'g' with const-qualified type 'const int &'
    g = 42;
    ~ ^
02-33.c:10:11: note: variable 'g' declared const here
    auto &g = ci;
    ~~~~~~^~~~~~
3 errors generated.
*/
