/*
char         cval;
int          ival;
unsigned int ui;
float        fval;
double       dval;

cval = 'a' + 3;            //promote 'a' type to int, add to 3, conver the result to char.
fval = ui - ival * 1.0;    //promote int to double, uint to double, convert result to float
dval = ui * fval;          //uint to float, do the multiplication, promote result to double
cval = ival + fval + dval; //promote int to float, do the sum, promote the result to double, do the sum, and convert the result type to char.
*/
