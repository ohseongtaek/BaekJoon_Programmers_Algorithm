#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int kg[101] = { 0 };
int value[101] = { 0 };
int d[101][100001] = { 0 };
int main() {
	int device, All_kg;
	cin >> device >> All_kg;				// ��ü ��ǰ �� ��ü ���� 
	for (int i = 1; i <= device; i++) {
		cin >> kg[i];						// ��ǰ�� ���� ���� 
		cin >> value[i];					// ��ǰ�� ���� ��ġ 
	}

    for (int i = 1; i <= device; i++) {     // ��ǰ ����ŭ �ݺ��Ѵ� 
        for (int j = 0; j <= All_kg; j++) { // j�� ��
            d[i][j] = d[i - 1][j];
            if (j - kg[i] >= 0) {
                d[i][j] = max(d[i][j], d[i - 1][j - kg[i]] + value[i]);
            }
        }
    }

    cout << d[device][All_kg] << endl;



	return 0;
}

