#include <iostream>
using namespace std;

int main() {
	int test, kinds, eat,n,result=0;
	cin >> test;

	for (int i = 0; i < test; i++) {
		cin >> kinds;//사탕의종류
		if (kinds < 1)
			return -1;
		cin >> eat;//먹어야하는 수
		if (eat > 100)
			return-1;
		for (int j = 0; j < kinds; j++) {
			cin >> n;//종류당 사탕개수
			result = result + n / eat;
		}
		cout << result<<"\n";
		result=0;
	}
	return 0;
}