#include <iostream>
#include <vector>

int main() {
    std::vector<int> vi{1,2,3,4,5,6,7,8,9,10};
    std::vector<int>::iterator it;
    
    for (it = vi.begin(); it != vi.end(); it++) {
        *it = *it * 2;
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
