//db
#include <iostream>
#include <math.h>
#define R 200
using namespace std;

int main()
{
    int x = 0, y = 0;
    while (cin >> x >> y) {
        if ((pow(x, 2) + pow(y, 2) <= pow(R / 2, 2))) {
            cout << "inside\n";
        }
        else {
            cout << "outside\n";
        }
    }
    return 0;
}