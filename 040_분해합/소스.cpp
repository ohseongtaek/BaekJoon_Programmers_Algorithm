#include<iostream>
using namespace std;
int ost(int a);

int main() {
	int num,good;
	cin >> num;					//24�Է� 122

	good = ost(num);			// 24�� �Լ� ȣ��  122

	if (good == num) {
		cout << "0" << endl;
	}
	else {
		cout << good;
	}
	return 0;
}

int ost(int a) {			// a =24�� ����	122
	int x = 1;

	while (1) {
		int cnt = x;
		int sum = x;

		while (cnt) {				// ó������ 1�� ������ �� cnt�� ó����1���� ~ �þ ���� x=21�϶� 
			sum = sum + (cnt % 10);	// sum�� 21�� ���⼭ 21+1 �� �׷��� 22 ���� ����� ���� sum�� 22 ���⼭ cnt %10 �� 2�� ���ϸ� 24 
			cnt = cnt / 10;			// cnt�� 2�� ���� �� while	���� ����� 0�̵� 
		}

		if (x == a || sum == a) {		// ���⼭ sum = a�� ���Ƽ� Ż�� �� x���� 
			break;
		}
		x++;							// x 1������  122�϶��� 115�� �������ε� �̴�
	}									// cnt =115 sum 115 ó���� while�� 115+5 �� sum �� ���� cnt/10 �� 11�̴� 
	return x;							// ���� �� while�� ���� sum(120)+1 �̸� �ٽ� ���⼭ cnt/10������ 1�̵Ǹ� ���������� sum(121)+1�� �Ѵ� 
}										// ������ while(cnt)���� 10���� ��� �����鼭 �����ڸ� �����ڸ� �����ڸ��� ���ؼ� ������ Ż��!!!