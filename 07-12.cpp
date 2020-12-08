struct Sales_data;
std::istream &read(std::istream &is, Sales_data &item);

struct Sales_data {
    std::string bookNo;
    unsigned    units_sold;
    double      revenue;
    ...
    Sales_data(std::istream &is) {read(is, *this);}
};
