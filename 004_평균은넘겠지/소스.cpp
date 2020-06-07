#include <iostream>
#include <memory.h>

using namespace std;

int main() {
    int T;
    int stud[1000];
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        memset(stud, 0, sizeof(stud));
        int mean = 0;
        for (int j = 0; j < N; j++) {
            cin >> stud[j];
            mean += stud[j];
        }
        mean = mean / N;
        int cnt = 0;
        for (int j = 0; j < N; j++) {
            if (stud[j] > mean) {
                cnt++;
            }
        }
        cout << fixed;         // �ε��Ҽ����� �����Ҽ������� �ٲ�
        cout.precision(3);      // �����Ҽ������� �ٲ� ��0.������� 3�ڸ��� ����ϴ°� ���� ���� fix�� ���ٸ� �ؿ��� 3���� �������ָ� 40.000�� �������ԵǸ� 
                                // precision���� 5�� �ٲ��൵ �������� , �Ҽ����� �ִٴ� �����Ͽ� fixed �� ���� �ؿ� 3�������̶� �׳� �ؿ� 5�� �����̶��� ���� 
        cout << 100 * cnt / (double)N << "%" << endl;
    }
    return 0;
}