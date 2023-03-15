#include <iostream>
using namespace std;
int gcd(int x, int y) {
    int num = 1;
    while (num != 0) {
        num = x % y;
        x = y;
        y = num;
    }
    return x;
}
int main() {
    int x, y;
    cin >> x;
    cin >> y;
    cout << gcd(x, y) << endl;
    return 0;
}