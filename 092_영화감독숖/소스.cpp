#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, count = 0, jong = 666;
	string str;
	cin >> n;
	while (jong) {
		str = to_string(jong);			// s = 666 
		if (str.find("666") != -1) {		//666ã�� ������ count++
			count++;
		}
		if (count == n) {				// n=2 �ϰ�� count �� 1666 ���� �����Ѵ� 
			cout << jong << endl;
			break;
		}
		jong++;
	}
	return 0;
}