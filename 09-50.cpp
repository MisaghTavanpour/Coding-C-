#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int sumInt (const vector<string> v) {
    int sum = 0;
    for (auto i : v) {
        sum += stoi(i);
    }
    
    return sum;
}

float sumFloat (const vector<string> v) {
    float sum = 0;
    for (auto i : v) {
        sum += stof(i);
    }

    return sum;
}


int main() {
    vector<string> vInt{"1", "123", "-100", "25"};
    vector<string> vFloat{"1.1", "123.5", "-100.5", "25.0"};

    cout << sumInt(vInt) << endl;
    cout << sumFloat(vFloat) << endl;
    return 0;
}
