struct Sales_data {
    std::string bookNo;
    unsigned    units_sold;
    double      revenue;
    ...
    Sales_data() {bookNo = ""; units_sold = 0; revenue = 0;}
    ...
};

