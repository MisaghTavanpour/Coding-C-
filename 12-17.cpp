#include <iostream>
#include <memory>

using namespace std;

int main () {  
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);
    typedef unique_ptr<int> IntP;

    //IntP p0(ix);              //Error, cannot initialize unique_ptr using an int
    //IntP p1(pi);              //Ok, BUT at run time, when get out of function scope,
                                //the object it points at(&ix) has been out of scope,
                                //and it already got freed. Therefore, p1 hit an error
                                //since there is nothing for its delete.
   // IntP p2(pi2);             //OK
    //IntP p3(&ix);             //same as 'IntP p1(pi);'
    //IntP p4(new int(2048));   //OK
    //IntP p5(p2.get());        //OK, BUT at run time, more than one unique_ptr points 
                                //to a same object and we get out of the scope (once func ends),
                                //program will hit an error since cannot freed one object 
                                //twice (one per each unique_ptr)

    return 0;
}
