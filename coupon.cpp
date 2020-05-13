#include <iostream>
using namespace std;

int main() {
	int count;
	double price;

	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> price;
		printf("$%.2f\n", price*0.8);
	}
	return 0;
}