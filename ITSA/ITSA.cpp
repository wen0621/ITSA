//db
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a = 0;
    string str;
    while (cin >> a) {
        str = "";
        if (a < 0) a += 256;
        for (int i = 0; i < 8; i++) {
            str = str.insert(0, to_string(a % 2));
            a /= 2;
        }
        cout << str << endl;
    }
    system("pause");
}