#include <iostream>
using namespace std;
int gcd(int m, int n) {
    int t = 1;
    while (t != 0) {
        t = m % n;
        m = n;
        n = t;
    }
    return m;
}
int main() {
    int x, y;
    cin >> x;
    cin >> y;
    cout << gcd(x, y) << endl;
    return 0;
}