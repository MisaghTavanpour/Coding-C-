#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

struct Sales_data {
    std::string bookNo;
    unsigned    units_sold;
    double      revenue;
};

int main(int argc, char *argv[])
{
    ifstream in("input.txt");
    ofstream out(argv[1]);
    Sales_data total, trans;
    if (in && out) {
        if (in >> total.bookNo >> total.units_sold >> total.revenue) {
            Sales_data trans;
            while (in >> trans.bookNo >> trans.units_sold >> trans.revenue) {
                if (total.bookNo == trans.bookNo) {
                    total.units_sold += trans.units_sold;
                    total.revenue += trans.revenue;
                } else {
                    out << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                    total = trans;
                }
            }    
            out << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
        }
    } else {
        std::cerr << "Could not open a file!" << std::endl;
        return -1;
    }

    return 0;
}
