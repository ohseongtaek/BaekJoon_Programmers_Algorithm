#include <iostream>
using namespace std;
#define ll long long

ll power(ll x, ll y, ll mod) {
	ll ans = 1;							//x�� n2 (�и�) y �� �ŵ����� mod �� ������ 
	while (y > 0) {						// ������ 0���� ũ�� ��� ���� ���ش� 
		if (y % 2 == 1) {				// ������ Ȧ����� x�ϳ� �����ְ� �������� ������ �ִ´� 
			ans = ans * x;
			ans = ans % mod;
		}
		x = x * x;
		x = x % mod;
		y = y / 2;
	}
	return ans;
}

int main() {
	int N, K;
	cin >> N >> K;
	ll mod = 1000000007;
	ll n1 = 1, n2 = 1, n3;

	for (int i = 2; i <= N; i++) {		// n!/k!(n-k)! �� n! ����
		n1 = n1 * i;
		n1 = n1 % mod;
	}
	for (int i = 2; i <= K; i++) {		//n!/k!(n-k)! �� k! ����
		n2 = n2 * i;
		n2 = n2 % mod;
	}
	for (int i = 2; i <= (N - K); i++) {	//n!/k!(n-k)! �� k!�����ѰͿ� (n-k)! ���� �ؼ� �и� ���ϴ� ���� n2
		n2 = n2 * i;
		n2 = n2 % mod;
	}
	n3 = power(n2, mod - 2, mod);		// ���� ���꿡�� / �������� %�Ҷ� ��갪�� �ٸ��Ƿ� A = (n! % p) * B = {(k!(n-k)!)^p-2 % p} = 1 ���� �̿��� B�� power�Լ��� ���� 
	n3 = n3 % mod;						// �丣���� �������� ����� ������ ���� �ſ� Ŀ���� ��Ȳ���� ���� ���� 100000087�̴� �̷��� ū ���� ������ ó���ϱ� �����̸� ���ڰ� �ʹ� Ŀ���°��� ������ ���� ������� %p�� ���־� ���� ����� �ʰ� ���ִ°��̴� 
	n3 = n3 * n1;						// A*B �� ���� ���� 
	n3 = n3 % mod;
	cout << n3 << '\n';
	return 0;
}