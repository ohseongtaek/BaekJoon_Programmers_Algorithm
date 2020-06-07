#include<iostream>
#include<cmath>
int ost(double x1, double y1, double x2, double y2);
using namespace std;


int main() {
	int testcase;
	cin >> testcase;

	for (int i = 0; i < testcase; i++) {
		double x1, y1, r1, x2, y2, r2, k;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		k = ost(x1, y1, x2, y2);
		if (x1 == x2 && y1 == y2 && r1 == r2) {			//�� ���� �Ϻ��ϰ� ��ĥ��� ������ ����� ���� ���Ѵ� 
			cout << "-1" << endl;
		}
		else if (sqrt(k) > r1 + r2) {					// �ؿ� �Լ����� ��Ʈ�� �Ⱦ���� ������ ���⼭ �������ֱ� �����̴� sqrt�Լ��� k�� �̷����� ������ ����� ���� ���°� 
			cout << "0" << endl;
		}
		else if (sqrt(k) == r1 + r2) {					// 1���ΰ�� �ο��� �ٱ����� �����ϴ� ��� 
			cout << "1" << endl;
		}
		else if (k > pow(r1-r2,2)) {						// �����ϱ� �� ���� �� ���������� �Ÿ��� ������ �� ������ ������ �������� Ŭ��찡 �ο��� �� ������ ��ġ�°� �׷��� 2�� 
			cout << "2" << endl;
		}
		else if (k == pow(r1 - r2, 2)) {
			cout << "1" << endl;						// �ѿ� �ȿ� �ٸ��������ְ� �����ϴ� ��� �� 
		}
		else {
			cout << "0" << endl;						// ���� ������ ������ �ٸ� �������� �������� ����ó�� 
		}
	}
	return 0;
}	
int ost(double x1, double y1, double x2, double y2) {			// �� �������� �������� �Ÿ��� ���ϴ� �Լ� �̴� 
	return (x1 - x2)* (x1 - x2) + (y1 - y2)* (y1 - y2);		// ���������� (��Ʈ (x1-x2)����+(y1-y2)����)�ε� ��Ʈ�� ������ �ʴ´� 
}