#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count=1;				//����Ұ� ó������1�̴� 1�� �ʱ�ȭ 
	int next=1;					//����ĭ���� �������� ���� 
	int temp=1;					//�Ͻ������� �����ϴ� ���� 

	while (1) {
		if (next >= n) {		//���� �Է°����� ����ĭ���� �������� ���� ũ�⺸�� �۴�? ex�Է°��� 12�ε� �����Է°��� 3��° ���� �����ΰ��� �׷� �����°� 
			break;
		}
		temp = (count++) * 6;	//���� �ϳ��� �ø��� �翬�� ������ ĭ�� 6�ǹ���̱⶧���� 6�� ���Ѵ�.
		next = next + temp;		//�Ͻ����� ���庯���� ���� ���ǹ����� ���ϸ� ����ĭ�� ���������� 
	}
	cout << count << endl;

	return 0;
}