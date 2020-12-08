
int calc(int&, int&){}
int calc(const int&, const int&){} //const conversion


int calc(char*, char*){}
int calc(const char*, const char*){} //const conversion


int calc(char*, char*){}
int calc(char* const, char* const){}  //error, it is similar to line 10

int main() {}
