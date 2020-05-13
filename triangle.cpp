#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c;
	d = a + b + c;
	if (a == 60 && a == b && a == c)
		cout << "Equilateral";
	else if (d == 180 && (a == b || a == c || b == c))
		cout << "Isosceles";
	else if (d == 180 && (a != b || a != c || b != c))
		cout << "Scalene";
	else
		cout << "Error";
	return 0;
}