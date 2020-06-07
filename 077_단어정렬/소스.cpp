#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int comp(string x, string y) {
	if (x.length() == y.length()) {
		return x < y;				// �������� ������ 
	}
	return x.length() < y.length();						// �ٸ����� ���̼� 
}


int main() {
	int n;
	string dan;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		cin >> dan;
		if (find(v.begin(), v.end(), dan) == v.end()) {
			v.push_back(dan);
		}
	}

	sort(v.begin(), v.end(), comp);

	for (int j = 0; j < v.size(); j++) {
		cout << v[j] << "\n";
	}

	return 0;
}