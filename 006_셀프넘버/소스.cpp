#include<iostream>
using namespace std;
int d(int n);
int main() {

	bool arr[10001] = { false };

	for (int i = 1; i <= 10000; i++) {
		int num = d(i);						//1~10000 ���� ���� �迭 3�̶�� �ϸ� 
		if (num <= 10000) {					// ���ϰ��� 6�̶� �ش� �Լ��� ���´� 
			arr[num] = true;				// ���� �ش� ���� arr[3]���� true�� �ȴ�. �����ڰ� �ִ� ���� ��� ture�� �ٲ� 
		}
	}
	for (int j = 1; j <= 10000; j++) {		// ����ϴ� for���̴� ������ false�ΰ��� ����Ѵ� ���� �����ڰ� ���°͵��̴�.
		if (!arr[j])
			cout << j << endl;
	}


	return 0;
}

int d(int n) {
	int sum;
	sum = n;

	while ( n != 0 ) {
		sum = sum + n % 10;						//���� 3�� ������ sum = 6 �� �ȴ� 
		n = n / 10;								// dlgn n = 0.9 ���̵Ǹ� ���⼱ int�� 0�̵ȴ� ���� ���ϰ��� 6�̴�.
	}
	
	return sum;
}