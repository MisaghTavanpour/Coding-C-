(a)
int ff(int a, int b = 0, int c = 0); //OK

(b)
char *init(int ht = 24, int wd, char bckgrnd);  //error, following paramaters to an initialzed paramter should be initialized as well.
