/*
Write a class that has three unsigned members
representing year, month, and day. Write a constructor that takes a string
representing a date. Your constructor should handle a variety of date
formats, such as January 1, 1900, 1/1/1900, Jan 1, 1900, and so on.
*/

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class date {
    unsigned int year;
    unsigned int month;
    unsigned int day;

public:
    date() = default;
    date(string s);
    void print() {cout << year << " " << month << " " << day << endl;}
};

date::date(string s) {
    string::size_type pos;
    if ((pos = s.find("/")) != string::npos) {
        month = stoi(s, 0);
        ++pos;
        s = s.substr(pos);
        cout << s << endl;
        pos = s.find("/");
        day = stoi(s, 0);
        ++pos;
        s = s.substr(pos);
        year = stoi(s, 0);
    } else if ((pos = s.find(",")) != string::npos) {
        vector<string> vStr{"Jan", "Feb", "Mar", "Apr", "May", "Jun"
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        year = stoi(s.substr(pos + 1));
        s = s.substr(0, pos);
        pos = s.find_first_of("1234567890");
        day = stoi(s.substr(pos));
        s = s.substr(0, pos - 1);
        int counter = 1;
        for (auto i : vStr) {
            if (s.find(i) != string::npos) {
                month = counter;
                break;
            }
            ++counter;
        }
    }
}

int main() {
    date d1("05/03/2020"), d2("Jan 21, 1200"), d3("February  13, 2010");


    d1.print();
    d2.print();
    d3.print();
    return 0;
}
