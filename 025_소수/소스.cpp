#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int count = 0, result = 0;
	cin >> num;
	int arr[100] = { 0 };
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];

		for (int j = 1; j <= arr[i]; j++)
		{
			if (arr[i] % j == 0)
			{
				count++;
			}
		}

		if (count == 2)  // ������ �������� ���� 1�� �ڽ� �� ��
			result++;

		count = 0;
	}

	cout << result;

	return 0;
}