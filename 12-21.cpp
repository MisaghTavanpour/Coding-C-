std::string& StrBlobPtr::deref() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];  // (*p) is the vector to which this object points
}

vs.

std::string& deref() const
{ return (*check(curr, "dereference past end"))[curr]; }

The first version seems to be more clear in term of debugging.
