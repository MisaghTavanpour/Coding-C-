class Example {
public:
    static double rate = 6.5;            //error, initialize static non-const outside of the class.
    static const int vecSize = 20;
    static vector<double> vec(vecSize);  //error, initialize static non-const outside of the class.
};


double Example::rate;                    //error, initialization required
vector<double> Example::vec;             //error, initialization required
