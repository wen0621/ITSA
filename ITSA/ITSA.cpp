#include <iostream>
using namespace std;

void sort(string input[]) {
	int len = input.length();
	cout << len;
}

int main() {
	int num;
	char* input;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> input;
		sort(strtok(input, ' '));
	}
	return 0;
}