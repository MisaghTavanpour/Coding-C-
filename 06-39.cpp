(a)
int calc(int, int);
int calc(const int, const int);    //Ok, a new function

(b)
int get();
double get();   //error, reutrn type is not enough to distinguish two functions

(c)
int *reset(int *);
double *reset(double *);    //Ok

