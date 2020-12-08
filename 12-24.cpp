#include <iostream>
#include <string>

using namespace std;

int main() {    
    string s1;
    cin >> s1;
    
    unsigned int size = s1.size();
    char  *ch = new char[size];

    for (int i = 0; i < size; ++i) {
        ch[i] = s1[i];
    }

    for (int i = 0; i < size; ++i) {
        cout << ch[i];
    }
    cout << endl;

    delete [] ch; 

    return 0;
}
