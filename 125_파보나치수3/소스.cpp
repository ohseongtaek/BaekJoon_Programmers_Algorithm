#include<iostream>
using namespace std;
typedef long long ll;
#define mod 1000000;
ll arr[1500005];
// �ǻ�� �ֱ⸦ ���� 1,000,000���� ���� �Ǻ���ġ ������ �ݺ��Ǵ� �ֱ�� 1,500,000�̶� ���� �� �� �־���.
int main() {
	ll n;
	cin >> n;
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 0; i < 1500000; i++) {
		arr[i + 2] = (arr[i + 1] + arr[i]) % mod;
	}
	cout << arr[n % 1500000] << '\n';

	return 0;
}