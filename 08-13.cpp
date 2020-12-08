#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::istringstream;
using std::ifstream;

struct PersonInfo {
    string name;
    vector<string> phones;
};


int main() {
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    ifstream in("input.txt");

    while (getline(in, line)) {
        PersonInfo info;
        record.str(line);
        record >> info.name;
        while (record >> word) info.phones.push_back(word);
        people.push_back(info);
        cout << info.name << endl;
        for ( auto i : info.phones) cout << i << endl;
        record.clear();
    }

    return 0;
}
