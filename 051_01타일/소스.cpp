#include<iostream>
#include<string>
using namespace std;
/*
0�� ¦�������ϸ�
�����ִ� �迭�� �������� �ȵȴ� ex)0101 �̷����� �ȵ� 0�� �پ��־���� 0010 �̰͵� �ȵ� 

�ι�°�δ� ��ȭ���� ���캸�� arr[n] = arr[n-1] + arr[n-2] �̴� 
*/
int arr[1000000+1];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] = arr[i] % 15746;
	}
	//for (int i = 0; i <= n; i++) {
	//	cout << "what?" << arr[i] << endl;
	//}
	
	cout << arr[n] << endl;

	return 0;
}