#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int ml;
	double km;
	cin >> ml;
	km = double(ml * 1.6);
	cout << fixed << setprecision(1) << km << endl;
}