#include <iostream>
using namespace std;

int main() {
	int test, kinds, eat,n,result=0;
	cin >> test;

	for (int i = 0; i < test; i++) {
		cin >> kinds;//����������
		if (kinds < 1)
			return -1;
		cin >> eat;//�Ծ���ϴ� ��
		if (eat > 100)
			return-1;
		for (int j = 0; j < kinds; j++) {
			cin >> n;//������ ��������
			result = result + n / eat;
		}
		cout << result<<"\n";
		result=0;
	}
	return 0;
}