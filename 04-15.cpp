/*
double dval; int ival; int *pi;
dval = ival = pi = 0;             // pi is a pointer and cannot be assigned to an int.
*/

int main() {
    double dval; int ival; int *pi;
    dval = ival = *pi = 0;
}
