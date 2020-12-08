#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

struct Sales_data {
    std::string bookNo;
    unsigned    units_sold;
    double      revenue;
};

int main()
{
    ifstream in("input.txt");
    Sales_data total, trans;
    if (in) {
        if (in >> total.bookNo >> total.units_sold >> total.revenue) {
            Sales_data trans;
            while (in >> trans.bookNo >> trans.units_sold >> trans.revenue) {
                if (total.bookNo == trans.bookNo) {
                    total.units_sold += trans.units_sold;
                    total.revenue += trans.revenue;
                } else {
                    cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                    total = trans;
                }
            }    
            cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
        }
    } else {
        std::cerr << "Could not open the file!" << std::endl;
        return -1;
    }

    return 0;
}
