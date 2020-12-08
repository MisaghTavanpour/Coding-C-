#include <iostream>

struct Sales_data {
    std::string bookNo = "";
    std::string bookTitle = "";
    unsigned num_authors = 0;
    std::string firstAuthorFirstName = "";
    std::string firstAuthorFamilyName = "";
    double price = 0.0;
    std::string publisher = "";
    unsigned units_sold = 0;
    double revenue = 0.0;    
};

int main() {
    Sales_data b1, b2;

    std::cout << "Please enter the first book number:" << std::endl;    
    std::cin >> b1.bookNo;
    std::cout << "Please enter the first book price:" << std::endl;    
    std::cin >> b1.price;
    std::cout << "Please enter the first number of book sold:" << std::endl;    
    std::cin >> b1.units_sold;

    std::cout << "Please enter the second book number:" << std::endl;    
    std::cin >> b2.bookNo;
    std::cout << "Please enter the second book price:" << std::endl;    
    std::cin >> b2.price;
    std::cout << "Please enter the second number of book sold:" << std::endl;    
    std::cin >> b2.units_sold;

    b1.revenue = b1.price * b1.units_sold;
    b2.revenue = b2.price * b2.units_sold;

    std::cout << b1.bookNo << " " << b1.units_sold << " " << b1.revenue << " " << b1.price << std::endl;
    std::cout << b2.bookNo << " " << b2.units_sold << " " << b2.revenue << " " << b2.price << std::endl;

    if (b1.bookNo == b2.bookNo) {
        std::cout << "Sum = " << b1.revenue + b2.revenue << std::endl;
    }
    
    return 0;
}
