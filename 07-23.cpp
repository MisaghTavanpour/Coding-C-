//should go to a .h file

#ifndef SCREEN_H
#define SCREEN_H

class Screen {
    public:
        typedef std::string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
        char get() const { return contents[cursor]; }
        char get(pos ht, pos wd) const;
        void move(pos r, pos c);
        void some_member() const;

    private:
        pos cursor = 0, height = 0, width = 0;
        std::string contents;
        mutable size_t access_ctr;
};

inline 
void Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c ;
}

inline
char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

void Screen::some_member() const {
    ++access_ctr; // keep a count of the calls to any member function
}
#endif
