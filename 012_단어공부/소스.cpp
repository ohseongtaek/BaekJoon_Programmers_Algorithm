#include<iostream>
using namespace std;

int main() {
	string str;
	int maax=0;					//�ִ밪�ε�
	int arr[26] = { 0 };		//���ĺ� �迭�� ������ ���°� 
	int index;					//�迭 �ε�����
	int count=0;				//�ִ� ���°� 
	cin >> str;					//���ڿ� �Է� 

	for (int i = 0; i < str.length(); i++) {			// �Է¹��� ���ڿ���ŭ for�������ؼ� �빮�ڳ� �ҹ��� ���о��� a�� 0�� �����ϴ°� 
		int n = str[i];
		if (n < 97) {
			arr[n - 65]++;
		}
		else {
			arr[n - 97]++;
		}
	}

	for (int j = 0; j < 26; j++) {						// �ش� �迭�� ������ �ִ밪�� ������ �׸��� �ش� �ε��� ��ȣ�� ������ 
		if (arr[j] > maax) {
			maax = arr[j];
			index = j;
		}
	}

	for (int k = 0; k < 26; k++) {						// �ƽ����� 2���϶��� ����ó���̴� count�� �ƽ����� ��������  �׸��� 2�̻��̸� ?����� return
		if (arr[k] == maax) {
			count++;
			if (count >= 2) {
				cout << "?" << endl;
				return 0;
			}
		}
	}
	cout << (char)(index + 65) << endl;

	return 0;
}