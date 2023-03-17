#include <iostream>
using namespace std;

int main() {
	int num, real[2], img[2];
	cin >> num;
	for (int i = 0; i < num; i++) {
		char symbol;
		cin >> symbol >> real[0] >> img[0] >> real[1] >> img[1];
		switch (symbol) {
			case '+':
				cout << real[0] + real[1] << " " << img[0] + img[1] << endl;
				break;
			case '-':
				cout << real[0] - real[1] << " " << img[0] - img[1] << endl;
				break;
			case '*':
				cout << real[0] * real[1] - img[0] * img[1] << " " << img[0] * real[1] + real[0] * img[1] << endl;
				break;
			case '/':
				cout << (real[0] * real[1] + img[0] * img[1]) / (real[1] * real[1] + img[1] * img[1]) << " " << img[0] * real[1] - real[0] * img[1] / (real[1] * real[1] + img[1] * img[1]) << endl;
				break;
			default:
				break;
		}
	}
	return 0;
}