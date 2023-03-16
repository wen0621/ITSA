#include <iostream>
using namespace std;

int main() {
    int row, column;
    while (cin >> column >> row) {
        int data[column][row];
        for (int i = 0; i < column; i++) {
            for (int j = 0; j < row; j++) {
                cin >> data[i][j];
            }
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << data[j][i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}