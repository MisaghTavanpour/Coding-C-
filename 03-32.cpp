#include <vector>

int main() {
    int a[10];
    int b[10];

    for (int i = 0; i < 10; i++) {
        a[i] = i;
        b[i] = a[i];
    }

    //with Vectors
    std::vector<int> va, vb;
    for (int i = 0; i < 10; i++){
        va.push_back(i);
    }
    vb = va;

    return 0;
}
