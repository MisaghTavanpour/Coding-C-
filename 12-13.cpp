auto sp = make_shared<int>();
auto p = sp.get();
delete p;           //makes sp a dangling pointer
