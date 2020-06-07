#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
using namespace std;

bool comp(const pair<int, int>& p1, const pair<int, int>& p2) {
	if (p1.second == p2.second) {
		return p1.first < p2.first;
	}
	return p1.second > p2.second;
}

int main() {

	vector<int> v;
	int test;
	int k;
	int sum = 0;
	cin >> test;			//�Է��� ���� ���� 5���Է� ���
	if (test % 2 != 1) {
		return -1;
	}

	//�Է��� ���� ������ŭ �Է��� ���� �� 
	for (int i = 0; i < test; i++) {
		cin >> k;
		v.push_back(k);
	}

	//���;ȿ� ������ ���� 
	sort(v.begin(), v.end());

	//��հ���� �� �ݿø� round�� 
	double one = 0;
	for (int i = 0; i < v.size(); i++) {
		one = one + v[i];
	}
	double one_result;
	one_result = one / test;
	cout << round(one_result) << endl;
	//end

	//��� �� ��� 
	int ind = 0;
	ind = v.size() / 2;
	cout << v[ind] << endl;
	//end

	//���帹�� ��Ÿ���°� ��� �Ȱ����� 2��°�� ���� �� ���	 pair<��(����),Ű(�󵵼�)>
	vector<pair<int, int> > st;
	vector<int>::size_type i;

	for (i = 0; i < v.size(); i++) {
		if (st.empty()) {
			st.push_back(pair<int, int>(v[i], 1));
			continue;
		}

		if (st.back().first == v[i]) {
			pair<int, int> tmp = st.back();
			tmp.second++;
			st.pop_back();
			st.push_back(tmp);
		}
		else {
			st.push_back(pair<int, int>(v[i], 1));
		}
	}

	if (st.size() > 1) {
		sort(st.begin(), st.end(), comp);

		if (st[0].second == st[1].second) {
			cout << st[1].first << endl;
		}
		else {
			cout << st[0].first << endl;
		}
	}
	else {
		cout << st[0].first << endl;
	}

	//end

	//�ִ� �ּ� ���̰� 
	int ca, ac;
	ca = v.front();
	ac = v.back();
	cout << v.back() - v.front();
	//end

	return 0;
}