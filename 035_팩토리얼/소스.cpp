#include<iostream>
using namespace std;
int ost(int x) {			//10���ڷ� �ް� ��� ���ϸ� �� 
	if (x > 2) {
		x = x * ost(x - 1);
	}
	return x;
}
int main() {
	int a, sum=1;				// 0! �� 1�̶� 1�� �ʱ�ȭ���Ѿ��� 
	cin >> a;					//10 �Է�

	if(a!=0){
		sum = ost(a);
	}
	cout << sum;

	return 0;
}