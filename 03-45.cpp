#include <iostream>

using std::cout;
using std::endl;

int main() {
    const int row = 3, column = 4;
    int ia[row][column] = {
                              {0, 1, 2, 3},
                              {4, 5, 6, 7},
                              {8, 9, 10, 11}
                          };

    for (auto &i : ia) {
        for (auto j : i){
            cout << j << " ";
        }

        cout << endl;
    }

    cout << endl << endl;
    for (auto i = 0; i < row; i++) {
        for (auto j = 0; j < column; j++) {
            cout << ia[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl << endl; 
    for (auto i = 0; i < row; i++) {
        for (auto j = 0; j < column; j++) {
            cout << *(*(ia + i ) + j) << " ";
        }

        cout << endl;
    }
    
    return 0;    
}
