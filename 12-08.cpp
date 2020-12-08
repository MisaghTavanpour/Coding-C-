bool b() {  //return type should be "int *"
    int* p = new int;
    // ...      //p has not got deleted here, so
    return p;   //caller should delete the p to avoid memory leak.
}
