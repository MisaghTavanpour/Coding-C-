class Account {
public:
    Account(std::string initOwner = "", double initAmount = 0) : owner(initOwner), amount(initAmount) {}
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);
private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
};
