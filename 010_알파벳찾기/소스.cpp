#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int index;
	cin >> str;
	for (char i = 'a'; i <= 'z'; i++) {		// �ƽ�Ű�ڵ带 �÷��� ���ڿ��� �����ϴµ� �ش� ���ڿ��� 
		index = str.find(i);				// index�� �̿��ؼ� �ش� �ε����� �����Ѵ� str���� find ã�Ƽ� �ش� index�� �����ϴµ� string�� �迭�������� �Ǿ��־
		cout << index << " ";				// ���� ���ڿ��� ã���� index�� �ش� �迭�ε����� �����Ѵ� ���� ��ã���� -1�� �����Ѵ� 
	}
	return 0;
}