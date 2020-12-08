
typedef string Type;
Type initVal();

class Exercise {
    public:
        typedef double Type;
        Type setVal(Type);
        Type initVal();
    private:
        int val;
};

Type Exercise::setVal(Type parm) {      // return type will be a string
    val = parm + initVal();
    return val;
}

//fix:
Exercise::Type Exercise::setVal(Type parm) {
