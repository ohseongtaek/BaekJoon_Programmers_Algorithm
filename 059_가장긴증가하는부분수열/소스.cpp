#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
///////////////////////////////////
////////// ���� ���� ///////////////
///////////////////////////////////
int N;
vector<int> v;
///////////////////////////////////
////////// ���� �Լ� ///////////////
///////////////////////////////////
int main() {
    cin >> N;
    // �ʱⰪ �ޱ� 
    int sub;
    cin >> sub;             //�ʱ⿡ 6 10 20 10 30 20 50 ��� ġ�� 10���� ���� 
    v.push_back(sub);       //      

    // ���Ϳ� �� ���Թޱ� 
    for (int i = 1; i < N; i++) {
        int sub;
        cin >> sub;

        // ũ�� Ȯ��.    �ڿ��� ���� ����
        int vec_size = v.size();
        //cout << "vsize"<<v.size() << endl;
        for (int diff = vec_size - 1; diff >= 0; diff--) {
            // sub �� �� ũ�� ���� �ε����� ���� �ε����� �о� �ִ´�. 
            if (v.at(diff) < sub) {
                // ���� ������ �ε������� ���� ũ�� push �� ����Ͽ� �߰��ϰ�, 
                // �ƴϸ� ���� ��ü�Ѵ�.  
                if (diff == vec_size - 1) {
                    v.push_back(sub);
                }
                else {
                    v.at(diff + 1) = sub;
                }
                break;
            }
            // �� ù ��° �ε��� ���� ���µ� ��ü�� ������, 0�� �ε����� ��ȯ
            if (diff == 0) v.at(0) = sub;
        }

    }

    cout << v.size();
    return 0;
}
