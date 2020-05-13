#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	if (a < 0) {
		return-1;
	}
	cin >> b;
	if (b > 10) {
		return-1;
	}
	cout << a * b;
}