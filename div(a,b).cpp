#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (a < 0 || b>10) {
		return-1;
	}

	cout.precision(15);
	cout << (double)a / b;
}