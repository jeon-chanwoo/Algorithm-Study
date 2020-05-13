#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	if (a < 2 && b, c, d>10000) {
		return-1;
	}
	cout << (a + b) % c << "\n";
	cout << ((a % c) + (b % c)) % c << "\n";
	cout << (a * b) % c << "\n";
	cout << ((a % c) * (b % c)) % c << "\n";
}