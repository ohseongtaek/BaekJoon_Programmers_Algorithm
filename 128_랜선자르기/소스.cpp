#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 10000;

int N, M;
long long electricLine[MAX];

bool possible(long long len)                    //len 401 �� 
{
    int cnt = 0;
    for (int i = 0; i < N; i++)
        cnt = cnt + electricLine[i] / len;      // 4�� �Է¹������� ���� 401�� ������ �� ���ϰ� �������̶� ���� ���� �߰������� �������� ��� �������� ��Ÿ�� 

    //cout << "cnt = ? " << cnt << endl;
    //���� ���� ����
    if (cnt >= M)                               //  M�� ������ ������ �� 11�� �� ������ ������ ���� cnt�� ũ�� �� ũ�� �߶� ���� ����� �ϹǷ� true ���� 
        return true;                            // cnt�� �������� ���� ��� ���ؼ� 11������ ������ �� �۰� �߶���ϹǷ� false ���� 
    return false;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;                              // ������ �ִ� ���� ������ ���� �� �Է� 

    long long high = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> electricLine[i];                 // ������ �ִ� ���� �� ���� ���� �Է� 

        high = max(high, electricLine[i]);      // �� ���������� �ִ밪�� high������ ���� 
    }

    long long result = 0;
    long long low = 1;                          //���� ������ ���� 

    //�̺� Ž�� ����
    while (low <= high)                         // low(1) <= high(802) �̹Ƿ� ���� 
    {
        long long mid = (low + high) / 2;       // �߰����� ã�´� mid ���⼱ 401
        if (possible(mid))                      // 401 �� �Լ��� ���� 
        {
            // cout << "what =? " << mid << endl;// result �� ������� �����ϴ� ��
            if (result < mid)                   // true�� ��� �� ũ�� �߶�� �ϹǷ� 
                result = mid;
            low = mid + 1;                      // ���������� mid�� ���������� �̵� 
        }
        else {
            // cout << "else what = ? " << mid << endl;
            high = mid - 1;                     // cnt�� �� �������� �� �۰� �߶� cnt�� 11�� �÷����ϹǷ� high �� mid -1 �� ���ش� 
        }

    }
    cout << result << "\n";
    return 0;
}

