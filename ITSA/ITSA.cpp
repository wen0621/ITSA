//db
#include <iostream>
using namespace std;
int main()
{
    int input = 0, sum = 0;
    while (cin >> input)
    {
        for (int i = 1; i <= input; i++) {
            if (i % 3 == 0) {
                sum += i;
            }
        }
        cout << sum << endl;
    }
}