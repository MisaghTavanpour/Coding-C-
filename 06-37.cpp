#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

const int size(10);
string strArray[size]{"aa", "bb", "cc", "dd", "ff"};

string (&fill(string (&a)[size])) [size] {
    string (&r)[10] = a; 
    for (string &i : a) i = "z";    
    return r;
}

using strA = string[10];

strA &fillOne(strA &a) {
    strA &r = a; 
    for (string &i : a) i = "a";
    return r;
}

auto fillTwo(strA &a) -> string (&) [size] {
    strA &r = a; 
    for (string &i : a) i = "b";
    return r;
}

strA &ref = strArray;

decltype(ref) fillThree(strA &a) {
    strA &r = a; 
    for (string &i : a) i = "c";
    return r;
}

void print(string a[]) {
    for (int i = 0; i < size; ++i) cout << *(a + i) << " ";
    cout << endl;
}

int main() {
    strA &r = fill(strArray);
    print (r);
    strA &r1 = fillOne(strArray);
    print (r1);
    strA &r2 = fillTwo(strArray);
    print (r1);
    strA &r3 = fillThree(strArray);
    print (r1);
    return 0;
}
