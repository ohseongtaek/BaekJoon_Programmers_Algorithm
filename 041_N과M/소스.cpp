#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = { 0 };
bool visited[MAX] = { 0 };
void dfs(int cnt)
{
   // cout << "CNT" << cnt<<endl;
    if (cnt == m)               // 0==2 false
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)            // n=4      4�� �ݺ��ϴµ� ������ ��ԵǴ°���?
    {
        //cout << "i�ǰ���?" << i << endl;
        if (!visited[i])                // ó���� false�� �����ؼ� if���� 
        {                               // ���� visitied[1] �� true�� ���� 
            visited[i] = true;          // ���� arr[1]�� 1�� �ִ´� 
            arr[cnt] = i;               // �ٽ� ����Լ� ���� cnt=1�� �� ���� �ٽ� if���� ���� return�� ������ vistited�� true�� cnt�� m�� �������ʾƼ� 
            //cout << arr[cnt] << "good" << endl;
            dfs(cnt + 1);               // ���� �ٽ� false ���� 
            visited[i] = false;         // i=2�� ��  �׷��ԵǸ� arr[2] = 2 �� arr[3] = 3 arr[4] = 4 �� �� ? ��������� ����;
        }
    }
    //cout << "forEnd" << endl;
}

int main() {
    cin >> n >> m;          // 4, 2 �ϰ�� 
    dfs(0);
}