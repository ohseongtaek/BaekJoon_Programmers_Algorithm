#include<iostream>
#include<string>
using namespace std;

int main() {
	int bong;						//3 kg, 5kg 5kg����!
	cin >> bong;					// �ؿ� ���ǹ����� 5�γ������������� ���� �������� ����? 
	int count=0;					// �׷��� �츮�� 5�� ���������������� -3�� �Ѱ��� 
	while (1) {						// �׷��� �ؿ� ���ǹ����� ��������� 5�� ������������� �ð��� ex) 11 -> 3������ �� 3������ 5����
		if (bong % 5 == 0) {		// �׷��� 7���� ���� ���� ����������� ���� �̷����� �������� -1�� ����϶� ����
			count = count + (bong / 5);	//���� ������(bong)�� -3�� ��� �ϴٺ��� -3�� �ȴ� ���� ������ �������� �ǰ� �ش� ���� ����Ѵ� 
			break;
		}
		bong = bong - 3;
		count++;
		if (bong < 0) {
			break;
		}
	}
	if (bong < 0)
		cout << "-1" << endl;
	else
		cout << count << endl;

	return 0;
}