#include<iostream>
#include<string>
using namespace std;

int main() {
	int a;			// �����ϱ������� ��� 1000
	int b;			// �Ѵ��� ������ 70
	int c;			// �Ǹź�� 170
	int result = 0;	// ��� ��� 

	cin >> a >> b >> c;
	result = c - b;				//���ͺб����� ������� ������ �Ǹź���� ���ƾ��ϱ⶧���� �ش��������� -1 �� ����Ѵ� 
	if (result <= 0) {
		cout << "-1" << endl;
	}
	else {
		cout << a / result + 1;		// ���ͺб����� ������ ���ݺ��� ���ƾߵǱ� ������ +1�� ���ִ°� 
	}

	return 0;
}