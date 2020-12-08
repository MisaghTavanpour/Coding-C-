int main () {
    int var                                                 //syntax error
    int sum = "string";                                     //type error
    cout << "should include iostream adn std namespcae";    //declaration errors
    return 0;
}

/*
Compile Results:

> g++ 01-15.c -o 01-15.exe 
clang: warning: treating 'c' input as 'c++' when in C++ mode, this behavior is deprecated [-Wdeprecated]
01-15.c:2:12: error: expected ';' at end of declaration
    int var                                                 //syntax error
           ^
           ;
01-15.c:3:9: error: cannot initialize a variable of type 'int' with an lvalue of type 'const char [7]'
    int sum = "string";                                     //type error
        ^     ~~~~~~~~
01-15.c:4:5: error: use of undeclared identifier 'cout'
    cout << "should include iostream adn std namespcae";    //declaration errors
    ^
3 errors generated.
*/

