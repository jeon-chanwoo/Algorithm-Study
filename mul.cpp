#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a;
	cin >> b;
	if (a, b < 100) {
		return-1;
	}
	if (a, b >= 1000) {
		return-1;
	}
	c = a * (b % 10);
	d = a * (b % 100) - c;
	e = a * b - c - d;
	cout << c << "\n";
	cout << d / 10 << "\n";
	cout << e / 100 << "\n";
	cout << c + d + e << "\n";
}