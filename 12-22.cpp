#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <initializer_list>

using namespace std;

class ConstStrBlobPtr;

/* *********************************************************************  */
class StrBlob {
    friend class ConstStrBlobPtr;

public:
    typedef vector<string>::size_type size_type;

    StrBlob();
    StrBlob(initializer_list<string> il);

    size_type       size() const { return data->size(); }
    bool            empty() const { return data->empty(); }
    void            push_back(const string &t) {data->push_back(t);}
    void            pop_back();
    string&         front();
    string&         front() const;
    string&         back();
    string&         back() const ;

private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;

    // return StrBlobPtr to the first and one past the last elements
    ConstStrBlobPtr begin();
    ConstStrBlobPtr end();
};

StrBlob::StrBlob(): data(make_shared<vector<string>>()) { }
StrBlob::StrBlob(initializer_list<string> il): data(make_shared<vector<string>>(il)) { }

void
StrBlob::check(size_type i, const string &msg) const {
    if (i >= data->size())
    throw out_of_range(msg);
}

string&
StrBlob::front() {
    check(0, "front on empty StrBlob");
    return data->front();
}

string&
StrBlob::front() const {
    check(0, "front on empty StrBlob");
    return data->front();
}

string&
StrBlob::back() {
    check(0, "back on empty StrBlob");
    return data->back();
}

string&
StrBlob::back() const {
    check(0, "back on empty StrBlob");
    return data->back();
}

void
StrBlob::pop_back() {
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

void print (const StrBlob sb) {
    cout << sb.front() << " ... " << sb.back() << endl;
}

/* *********************************************************************  */
class ConstStrBlobPtr {
public:
    ConstStrBlobPtr() : curr(0) { }
    ConstStrBlobPtr(const StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) { }
    std::string& deref() const;
    ConstStrBlobPtr& incr();
private:
    std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string&) const;
    // store a weak_ptr, which means the underlying vector might be destroyed
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr; // current position within the array
};

std::shared_ptr<std::vector<std::string>>
ConstStrBlobPtr::check(std::size_t i, const std::string &msg) const {
    auto ret = wptr.lock(); // is the vector still around?
    if (!ret) throw std::runtime_error("unbound StrBlobPtr");
    if (i >= ret->size()) throw std::out_of_range(msg);
    return ret;
}

std::string& ConstStrBlobPtr::deref() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];  // (*p) is the vector to which this object points
}

ConstStrBlobPtr& ConstStrBlobPtr::incr() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr; // advance the current state
    return *this;
}

/* ********************************************************************* */

ConstStrBlobPtr StrBlob::begin() {
    return ConstStrBlobPtr(*this);
}

ConstStrBlobPtr StrBlob::end() { 
    auto ret = ConstStrBlobPtr(*this, data->size());
    return ret;
}

/* ********************************************************************* */
int main() {
    initializer_list<string> il{"abc", "defg", "hijkl", "lmn"};
    const StrBlob  sb(il);

    print(sb);

    ConstStrBlobPtr sbp(sb, sb.size() - 1);

    cout << endl << "Checking sbp:" << endl;
    cout << sbp.deref() << endl;

    return 0;
}

