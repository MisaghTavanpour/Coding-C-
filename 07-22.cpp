#ifndef PERSON_H
#define PERSON_H

struct Person {
    friend std::istream &read(std::istream &in, Person &pp);
    friend std::ostream &print(std::ostream &out, const Person pp);

    private:
        std::string name;
        std::string address;

    public:
        std::string getName() const {
            return name;
        }

        std::string getAddress() const {
            return address;
        }

        Person() = default;
        Person(std::string n, std::string a) : name(n), address(a) {}
};

std::istream &read(std::istream &in, Person &pp) {
    in >> pp.name >> pp.address;
    return in;
}

std::ostream &print(std::ostream &out, const Person pp) {
    out << pp.name << " " << pp.address;
    return out;
}

#endif

