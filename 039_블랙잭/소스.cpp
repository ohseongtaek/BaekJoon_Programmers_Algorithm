#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int num, target, goal=0, sum = 0;
    int min = 9999999;
    int arr[MAX] = { 0, };              // �迭 100���� �ʱ�ȭ     
    cin >> num >> target;               // ������ ������ �ִ� ���� �Է� 
    for (int i = 0; i < num; i++)       // ������ ������ ���� �Է� ���� 
        cin >> arr[i];

    for (int i = 0; i < num - 2; i++)           // ���� 5���� ���ڸ� �Է��ϸ� 0~3�����Է¹ް� 
        for (int j = i + 1; j < num - 1; j++)   // 1~4���� ���� 
            for (int k = j + 1; k < num; k++)   // 2~5���� ���� 
            {
                sum = arr[i] + arr[j] + arr[k]; // ���� : 012 013 014 023 024 034 123 124 134 234 5C2��� ����ȴ� �ߺ����� �ʰ� 5���� ���߿� 3���̱� 
                if (target - sum < min && target - sum >= 0) {  // ���� �ִ񰪿��� sum���� ���� min���� �۰� (true) �ִ񰪿��� sum�� ���� 0���� ũ��? true
                    min = target - sum;             // �ִ밪���� sum���� ����� min���� �ִ´� 
                    goal = sum;                     // ������ ���� 
                }
            }
    cout << goal;
}