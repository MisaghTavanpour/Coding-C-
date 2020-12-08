
/*
The below programmed got compiled without any error!
Expected at least line 29 hit error!!!
*/


#include <iostream>
#include <string>

using std::cin;
using std::string;

constexpr int new_sz() { 
    return 42; 
}

constexpr size_t scale(size_t cnt) { 
    return new_sz() * cnt; 
}

constexpr bool isShorter(string &s1, string &s2) {
    return s1.size() < s2.size();
}

int main() {
    int arr[scale(2)]; // ok
    int i = 2;         // i is not a constant expression
    int a2[scale(i)];  // !!! compiled woithout any error

    string s1;
    string s2;
    cin >> s1 >> s2;
    bool shorter = isShorter(s1, s2);

    return 0;
}
