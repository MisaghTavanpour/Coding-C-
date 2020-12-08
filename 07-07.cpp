#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    Sales_data total;
    if (read(cin, total)) {
        Sales_data trans;
        while (read(cin, trans)) {
            if (total.bookNo == trans.bookNo) {
                total.combine(trans);
            } else {
                print(cout, total);
                cout << endl;
                total = trans;
            }
        }    
        print(cout, trans);
        cout << endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}
