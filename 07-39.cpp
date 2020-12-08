It is not legal.

From Class:
    Sales_data(const std::string &s = ""): bookNo(s) { }
    Sales_data(std::istream &is = std::cin);


From compile:
07-11.cpp:12:16: error: call to constructor of 'Sales_data' is ambiguous
    Sales_data data1;
               ^
./Sales_data.h:24:9: note: candidate constructor
        Sales_data(const std::string &s = ""): bookNo(s) { }
        ^
./Sales_data.h:63:13: note: candidate constructor
Sales_data::Sales_data(std::istream &is) {
            ^
1 error generated.
