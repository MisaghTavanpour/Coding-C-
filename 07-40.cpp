class Employee {
    typedef unsigned short us;
    typedef unsigned int ui;
    typedef string str;

    str firstName;
    str familyName;
    ui id;

    public:
        Employee() = default;
        Employee(str n, str fn, ui emID) : firstName(n), familyName(fn), id(emID) {}
};
