#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Sales_data {
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
    private:
        std::string bookNo;
        unsigned    units_sold;
        double      revenue;

        std::string isbn() const { 
            return bookNo; 
        }
    
        double avg_price() const;

    public:
        Sales_data() :  Sales_data("", 0, 0) { cout << "the default constructor" << endl; }
        Sales_data(const std::string &s, unsigned n, double p = 1): bookNo(s), units_sold(n), revenue(p*n) { cout << "the first constructor " << endl; }
        Sales_data(const std::string &s) : Sales_data(s, 0, 0) { cout << "the second constructor" << endl; }
        Sales_data(std::istream &is) : Sales_data("zxy", 1, 1) { cout << "the third constructor" << endl; }
};

inline
double Sales_data::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " "
           << item.revenue << " " << item.avg_price();
    return os;
}

int main() {
    Sales_data d1;
    print(cout, d1);
    cout << endl;

    Sales_data d2("abc", 2, 10);
    print(cout, d2);
    cout << endl;

    Sales_data d3("efd",3);
    print(cout, d3);
    cout << endl;

    Sales_data d4("hij");
    print(cout, d4);
    cout << endl;

    Sales_data d5(cin);
    print(cout, d5);
    cout << endl;

    return 0;
}
