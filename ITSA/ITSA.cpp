#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    char alp[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
        'h', 'i', 'j', 'k', 'l', 'm', 'n',
        'o', 'p', 'q', 'r', 's', 't', 'u',
        'v', 'w', 'x', 'y', 'z' };
    string str1 = "",t;
    vector<string> splitstr;
    getline(cin, str1);
    stringstream x(str1);
    while (getline(x, t, ' ')) {
        splitstr.push_back(t);
    }
    cout << splitstr.size() << endl;
    for (int i = 0; i < 26; i++) {
       if (str1.find(0,sizeof(str1)/sizeof(char), alp[i]) != 0) {
            cout << alp[i] << " : " << count(str1.begin(), str1.end(), alp[i]) << endl;
        }
    }
    system("pause");
}