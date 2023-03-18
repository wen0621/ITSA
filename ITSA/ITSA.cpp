#include <iostream>
using namespace std;

int main() {
	string input;
	int len;
	cin >> input;
	len = input.length();
	for (int i = 0; i < len / 2; i++) {
		if (input[i] != input[len -1 - i]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}