#include<iostream>
#include<string>
using namespace std;

int main() {
	int count = 0;
	string s;
	getline(cin, s);			//���ٷ� �Է¹ޱ����� �Լ� 
	if (s.length() >= 1) {		//�Է¹������� 1�� �̻��϶� 
		if (s[0] != ' ') {		//�׸��� �ܾ��� ó���� ������ �ƴҶ� 
			count++;			//+1	//1��° �ܾ�� �������� 
		}
	}

	for (int i = 0; i < s.length(); i++) {		//0���� ���� 
		if (s[i] == ' ') {						//�����϶� 
			if (s[i + 1] == ' ') {				// �������� �����϶� 
				count++;						// dont [����] [����] money �ϰ�쿡�� �����ؾ��Ѵ�. �������Ŀ� ���� ������ �ܾ�������Ѵ� 
			}
			else if (s[i + 1]) {				// dont [����] money �϶� ���ؾ��ϱ⶧���� �̰͵� �ʿ� 
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}