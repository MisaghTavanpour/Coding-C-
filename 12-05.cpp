In 12-02.cpp, if we change the following lines in the calss declaration

    StrBlob();
    StrBlob(initializer_list<string> il);

to 

    explicit StrBlob();
    explicit StrBlob(initializer_list<string> il);

then 
compiler would give us error at the compile time for 

print({"aaa"});


In general, if type conversion can cause confusion and may used 
incorrectly, then it is better to use explicit keyword. In this example,
it should be fine not use.
