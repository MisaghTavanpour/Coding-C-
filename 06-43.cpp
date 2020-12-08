(a) inline bool eq(const BigInt&, const BigInt&) {...} //put it in a header file to make sure all the definition are same.
(b) void putValues(int *arr, int size); //in a source file, in case we want different definition for different source files.
