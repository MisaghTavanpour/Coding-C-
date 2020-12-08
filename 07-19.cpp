#ifndef PERSON_H
#define PERSON_H

class Person {
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

#endif
