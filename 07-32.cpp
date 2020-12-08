#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Screen;

class Window_mgr {
    public:
        using ScreenIndex = std::vector<Screen>::size_type;
        Window_mgr();
        void clear(ScreenIndex);

    private:
        std::vector<Screen> screens;
};

class Screen {
    friend void Window_mgr::clear(ScreenIndex i);    
    
    public:
        typedef std::string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
        Screen &display(std::ostream &os){ 
            do_display(os);
            return *this; 
        }

    private:
        pos cursor = 0, height = 0, width = 0;
        std::string contents;
        mutable size_t access_ctr;
        void do_display(std::ostream &os) const {os << contents;}
};



Window_mgr::Window_mgr() : screens{1, Screen(2, 8, '*') } { }

void Window_mgr::clear(ScreenIndex i) {    
    Screen &s = screens[i];
    s.display(cout);
    cout << endl;
    s.contents = string(s.height * s.width, ' ');
    s.display(cout);
    cout << endl;
}

int main() {
    Window_mgr myWin;
    myWin.clear(0);
    return 0;
}
