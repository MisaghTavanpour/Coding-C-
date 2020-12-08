std::istream &read(std::istream &in, Person &pp) {
    in >> pp.name >> pp.address;
    return in;
}

std::ostream &print(std::ostream &out, const Person pp) {
    out << pp.name << " " << pp.address;
    return out;
}
