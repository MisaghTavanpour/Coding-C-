#include <iostream>
#include <string>

using namespace std;

int main() {
//First Past
    char c1[] = "abc";   //size = 4
    char c2[] = "defg";  //size = 5
    unsigned int sizeC1 = sizeof(c1);
    unsigned int size = sizeC1 + sizeof(c2) - 1;
    char *ch = new char[size];
    int i = 0;

    for (; i < sizeC1; ++i) {
        ch[i] = c1[i];
    }

    for (; i < size; ++i) {
        ch[i] = c2[i - sizeC1];
    }

    for (i = 0; i < size; ++i) {
        cout << ch[i];
    }
    cout << endl;
    cout << endl;
    
    delete [] ch;

//Second part
    string s1 = "abc";
    string s2 = "defg";
    string *str = new string {s1 + s2};

    cout << *str << endl;    

    delete str;

    return 0;
}
