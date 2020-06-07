#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, root, M, N, cnt;
    while (1) {
        cin >> n;
        if (!n)
            break;

        //n���� ũ��
        M = n + 1;
        //2n���� �۰ų� ����
        N = n * 2;

        cnt = 0;

        for (int i = M; i <= N; i++) {
            root = sqrt(i);
            //2�Ǵ� 3�� ���
            if (root == 1 && i != 1) {
                cnt++;
            }
            //n���� ũ�� 2���� �۰ų� ���� ���� Ȧ���� ���(¦���̸� �Ҽ��� �ƴϹǷ�)
            if (i % 2) {
                for (int j = 2; j <= root; j++) {
                    //�������� 0�̸� �Ҽ��� �ƴϴ�. ����.
                    if (!(i % j))
                        break;
                    //�ٱ��� ���� ������ ����� j���� �˰� �־�� ��.
                    if (j == root) {
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << '\n';
    }
}