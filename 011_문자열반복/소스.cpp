#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;                           // ��ü�ݺ�Ƚ�� 
    for (int i = 0; i < t; i++)
    {
        int r;                          //���ڿ� �ݺ�ȹ�� 
        string p;                       // ���ڿ� ���� 
        cin >> r;
        cin >> p;

        for (int j = 0; j < p.length(); j++)        // ���ڿ��� ũ�⸸ŭ �ݺ� ù��° ���ڿ��� a�̸� �ؿ��� ��� ���� b������ c�����鼭 �ش� ���ڿ��� ������ش�  
        {
            for (int k = 0; k < r; k++)             // ���ڿ� �ݺ�Ƚ�� ��ŭ �ݺ� r��ŭ�̴� 4���̸� �ش� ���ڿ� 4���ؼ� abc�Է½� aaaa�� �ؿ��� ����ϴ°� 
            {
                cout << p[j];                          // a�� ����Ѵ� 
            }
        }
        cout << endl;
    }
    return 0;
}
