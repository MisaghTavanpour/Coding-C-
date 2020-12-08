//see Person.h

//define as const since they are not going to modify the content

#ifndef PERSON
#define PERSON

struct Person {
    std::string name;
    std::string address;

    std::string getName() const {
        return name;
    }

    std::string getAddress() const {
        return address;
    }
};

#endif
