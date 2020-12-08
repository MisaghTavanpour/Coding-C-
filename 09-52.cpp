#include <iostream>
#include <string>
#include <vector>
#include <stack>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::stack;

void process (stack<string> &st, string str) {
    if (str != ")")
        st.push(str);
    else {
        while (!st.empty() && st.top() != "(") {
            cout << st.top() << " ";
            st.pop();
        }
        
        cout << st.top() << endl;
        st.pop();
        st.push("X");
    }
}

int main() {
    stack<string> st;
    //((5 + 4) - (3 * 8));
    //(-(54+)(38*))
    process(st, "(");
    process(st, "(");
    process(st, "5");
    process(st, "+");
    process(st, "4");
    process(st, ")");
    process(st, "-");
    process(st, "(");
    process(st, "3");
    process(st, "*");
    process(st, "8");
    process(st, ")");
    process(st, ")");
    return 0;
}
