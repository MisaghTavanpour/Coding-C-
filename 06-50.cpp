1- void f();
2- void f(int);
3- void f(int, int);
4- void f(double, double = 3.15);

(a) f(2.56, 42)
3, 4 --> error, ambiguouse call.

(b) f(42)
2, 4 --> 2 is the best match

(c) f(42, 0)
3, 4 --> 3 is the best match1

(d) f(2.56, 3.14)
3, 4 --> 4 is the best match
