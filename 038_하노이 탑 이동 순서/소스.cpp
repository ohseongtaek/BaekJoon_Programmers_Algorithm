#include <iostream>
#include <cmath>
using namespace std;
void ost(int n, int one, int two, int three) {
	if (n == 1) cout << one << " " << three << '\n';
	else {
		ost(n - 1, one, three, two);//1. 1������� n-1�� -> 2�� �������
		cout << one << " " << three << '\n'; //2. 1����� -> 3������
		ost(n - 1, two, one, three);//3. 2����� -> 3���������
	}
}
int main() {
	int n;
	cin >> n;
	cout << (1 << n) - 1 << '\n';//2^n-1...pow()�� �����ϸ� ����ó����. ��? pow()�� �Ǽ������� ���Ǳ� ����..
	ost(n, 1, 2, 3);
	return 0;
}