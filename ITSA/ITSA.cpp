//db
#include <iostream>
using namespace std;
int main()
{

    int input = 0;
    while (cin >> input)
    {
        int check = 0;
        for (int i = 2; i <= input - 1; i++) {
            if (input % i == 0) {
                check = +1;
            }
        }
        if (check == 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
