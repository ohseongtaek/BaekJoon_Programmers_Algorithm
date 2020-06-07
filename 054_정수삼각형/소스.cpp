#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <deque>
using namespace std;
int buffer[600][600];               // �Է¹��� �迭 
int result[600][600];               // ����� ������ �迭 
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {           //���� 4���    //����
        for (int j = 0; j <= i; j++) {                     //�������� �Է°�
            cin >> buffer[i][j];            //0,0 ���� �迭 �����ؼ� �� �Է� 
        }
    }
    result[0][0] = buffer[0][0];               // 00 �� �迭�� ������� ���� 
    for (int i = 1; i < n; i++) {              // 1�̴ϱ� 2��°������ ���θ��� 
        for (int j = 0; j <= i; j++) {  
            if (j == 0) {                      // j=0�ΰ��? �� ���⼭�� 1,0 2,0 3,0 4,0 ó�� �ǿ����� �밢���ϰ���̴� 
                result[i][j] = result[i - 1][j] + buffer[i][j];     //1,0 = 0,0(ù��°��) + �Է��Ѽ��� ���Ѱ��̴� 
            }
            else if (j == i) {                  // j = i �� ���� 1,1 2,2 3,3 4,4 5,5 ó�� �� �������� ����̴� 
                result[i][j] = result[i - 1][j - 1] + buffer[i][j];
            }
            else {                              // ���� �� �ΰ��� ����� ���� �ƴѰ�쿡�� 
                result[i][j] = max(result[i - 1][j], result[i - 1][j - 1]) + buffer[i][j];
            }   // �ش� ��ǥ�� �ü��ִ� ����Ǽ� 2���� �������Ϳ��������� �ִ밪�� ������� �� �ش� ���� ���ؼ� ����� �����Ѵ� 
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++) {       // 0 ���� n���� ��� �ݺ� 
        if (result[n - 1][i] >= max)    // ���� �Է��� 4�� result[3][0] ~ result[3][3] ���� �ݺ��ڴ� ������ �� �Ʒ����� ������� ����Ǿ��ֱ� �����̴� ���� max�� �̿��� �ִ밪�� �ִ´� 
            max = result[n - 1][i];
    }
    cout << max;
    return 0;
}