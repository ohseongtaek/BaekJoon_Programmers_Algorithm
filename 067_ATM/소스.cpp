#include<iostream>
#include<algorithm>
#include<vector>
#define endl '\n';
using namespace std;

vector<int> v;
int main() {
	int N,push;
	cin >> N;
	int p[1000 + 1];
	
	for (int i = 0; i < N; i++) {
		cin >> p[i];
		v.push_back(p[i]);
	}

/*	�迭 ���� �� test 
	sort(p, p + 4);
	
	for (int i = 0; i < N; i++) {
		cout << p[i] << endl;
	}
*/
	sort(v.begin(), v.end());
	
	for (int i = 1; i < N; i++) {
		v[i] = v[i] + v[i - 1];
	}
	push = 0;

	for (int i = 0; i < v.size(); i++) {
		push = push + v[i];
	}
	cout << push;
	
/*	���ĵ� �Լ��� ����ϴ� test �� 
	for (int i = 0; i < N; i++) {
		cout << v[i]<<endl;
	}
*/

	return 0;
}