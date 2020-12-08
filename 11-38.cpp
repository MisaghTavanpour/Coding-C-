#include <iostream>
#include <fstream>
#include<sstream>
#include<unordered_map>
#include <string>

using namespace std;

const string &
transform(const string &s, const unordered_map<string, string> &m) {
    auto map_it = m.find(s);
    return map_it != m.cend() ? map_it->second : s;
}

unordered_map<string, string>
buildMap(ifstream &map_file) {
    unordered_map<string, string> trans_map;
    string key, value;
    while (map_file >> key && getline(map_file, value)) {
        if (value.size() > 1) {
            trans_map[key] = value.substr(1);
        } else {
            throw runtime_error("no rule for " + key);
        }
    }

    return trans_map;
}

void
word_transform(ifstream &map_file, ifstream &input) {
    auto trans_map = buildMap(map_file);
    string text, word;
    istringstream stream;
    bool firstword;
    while (getline(input, text)) {
        istringstream stream(text);
        firstword = true;
        while (stream >> word) {
            if (firstword) {
                firstword = false;
            } else {
                cout << " ";
            }
            cout << transform(word, trans_map);
        }
        cout << endl;
    }
}

int main() {
    ifstream in1("11-33-1file.txt");
    ifstream in2("11-33-2file.txt");
    
    word_transform(in1, in2);
    return 0;
}
