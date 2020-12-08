#include <iostream>
#include <string>
#include <memory>

using namespace std;

void f1() { //from page 481
    unsigned int n = 3;
    string *const p = new string[n];
    string s;
    string *q = p;
    while (cin >> s && q != p + n)
        *q++ = s;

    cout << endl;
    const size_t size = q - p;

    for (int i = 0; i < size; ++i) {
        cout << p[i] << endl;
    }
    delete[] p; 
}

void f2() {
    unsigned int n = 3;
    allocator<string> alloc;
    auto const p = alloc.allocate(n);
    auto q = p;
    string s;
    while (cin >> s && q != p + n) {
        alloc.construct(q++, s);
    }

    cout << endl;

    const size_t size = q - p;
    for (int i = 0; i < size; ++i) {
        cout << p[i] << endl;
    }

    while (q != p) {
        alloc.destroy(--q);
    }

    alloc.deallocate(p, n);

}

int main() {
    f1();

    cout << endl;
    cout << endl;

    f2();
    return 0;
}
