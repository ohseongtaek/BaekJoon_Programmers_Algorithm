#include<iostream>
#include<algorithm>
using namespace std;
//DP[i] = DP[i - 3] + Arr[i - 1] + Arr[i] vs DP[i - 2] + Arr[i] vs DP[i - 1]
int arr[10001] = { 0 };
int result[10001] = { 0 };
int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	result[0] = arr[0] = 0;		//0 �� �����ϰ� 1���� 1������ ����� ���⼭ ���ʿ� ���������� �����ʿ䰡����
	result[1] = arr[1];
	result[2] = arr[1] + arr[2];
	for (int i = 3; i <= n; i++) {
		result[i] = max(result[i - 3] + arr[i - 1] + arr[i], max(result[i - 2] + arr[i], result[i - 1]));
		//���� ��ȭ���ε� �ߺ��� result 3�϶� ���� �����ؼ� 3�ܿ��� �ִ밪�� ������ ��� �ø��� �׸��� 4�� 5���϶��� ���ϴµ� ���Ҷ� 
		//n-3 �� �ִ밪 + n-1 + n ���� 3�ܿ����� ��츦 ������ ���� ���ϰ�
		// �������δ� n-2 �� �� �� �ִ밪 + n���ִ� ��
		// �������δ� n-1 ���� �ִ밪�� ���� �ִ븦 �����Ѵ�  
		//cout << result[i] << endl;
	}
	cout << result[n] << endl;


	return 0;
}