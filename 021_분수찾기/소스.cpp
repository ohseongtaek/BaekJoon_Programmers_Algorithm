#include <iostream>
using namespace std;

int main()
{													//�м� ��ġ �˾Ƴ��¹��� 
	int num;
	cin >> num;		//2								//¦���� Ȧ���� �� �����غ����� ¦���϶��� 
	int i;
	for (i = 1; num > 0; i++)						//i���� num������ ��°��� 
	{												//i�� �ݺ��Ǵ� ���̸� Ȧ���϶��� 
		num = num - i;	//num=-1 i=3		
	}
	if (i % 2 == 1)									//¦���϶� ����� ���°��� num�� ¦���϶� ������ for�����鼭 i���� Ȧ���� ��
	{
		cout << i + num - 1 << "/" << 1 - num << endl;	// 1/2
	}
	else if (i % 2 == 0)							//sum�� Ȧ���϶� ����� �� for�����鼭 i�� ¦������ 
	{		
		cout << 1 - num << "/" << i + num - 1 << endl;
	}
	return 0;
}
