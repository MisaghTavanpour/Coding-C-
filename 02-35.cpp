int main() {
    const int i = 42;
    auto j = i;                 // j has type int
    const auto &k = i;          // k has type const reference
    auto *p = &i;               // p is a pointer to int
    const auto j2 = i, &k2 = i; // j2 has type const int, k2 has type const reference
}
