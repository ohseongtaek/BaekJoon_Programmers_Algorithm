#include<iostream>
#include<string>
using namespace std;
int cnt = 0;
void check(string a);
int main()
{
	int n;				//��ü �ݺ�Ƚ�� �Է� 
	cin >> n;
	string str;
	for (int i = 0; i < n; i++)
	{
		cin >> str;				//���ڿ� �Է� 
		check(str);				//�Լ� ȣ�� 
	}
	cout << cnt;
	return 0;
}

void check(string a)
{
	int siz = a.size();					//�Է¹��� ���ڿ� ex happy�� twenteen
	for (int i = 0; i < siz - 2; i++)	// �Է¹��� ������ ù��°�� happy�̹Ƿ��� 3�� �ݺ��� 
	{
		if (a[i] != a[i + 1])			// h�� a�� ���� ������ �� (ù��°�� �ι�° ��) 
		{
			for (int j = i + 2; j < siz; j++) //���� ù��°�� 3��°���� ������ ���� 
				if (a[j] == a[i])				//���� ������ ������ ���� 
					return;
		}

	}
	cnt++;
}