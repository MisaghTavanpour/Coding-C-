int txt_size() {
    return 1;
}
int main() {
    unsigned buf_size = 1024;
    int ia1[buf_size];
    int ia2[4 * 7 - 14];
    int ia3[txt_size()];
    char st[11] = "fundamental";
}

/*
03-27.c:9:19: error: initializer-string for char array is too long
    char st[11] = "fundamental";
                  ^~~~~~~~~~~~~
1 error generated.
*/
