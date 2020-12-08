/*
int* ip, &r = ip;  --> 
int i, *ip = 0;
int* ip, ip2;
*/
int main() {
    int* ip, &r = ip;    // error on &r = ip
    int i, *ip3 = 0;
    int* ip4, ip2;
}

/*
02-25.c:7:15: error: non-const lvalue reference to type 'int' cannot bind to a value of unrelated type 'int *'
    int* ip, &r = ip;    // error on &r = ip
              ^   ~~
1 error generated.
*/
