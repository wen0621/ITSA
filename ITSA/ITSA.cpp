#include <iostream>
using namespace std;

int funtion(int num) {
	if ((num == 0) || (num == 1))
		return num + 1;
	else
		return funtion(num - 1) + funtion(num / 2);
}
int main() {
	int num;
	cin >> num;
	cout << funtion(num) << endl;
	return 0;
}