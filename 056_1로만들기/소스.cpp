#include<iostream>
#include<algorithm>
using namespace std;
int d[1000001], n;
int main() {
    cin >> n;           
    d[1] = 0;
    for (int i = 2; i <= n; i++) {
       // cout << "i�ǰ�" << i << endl;
        d[i] = d[i - 1] + 1;                        //�ٽ� -1 �ϰ� d[i]�� ���� �ؿ� %2�� %3�� �� d[i/2] d[i/3] �� �ּڰ��� ���� �ּҰ��� �����´� 
      //  cout << "d[i] " << d[i] << endl;
        if (i % 2 == 0) {
            d[i] = min(d[i / 2] + 1, d[i]);        
           // cout << "%2 d[i] " << d[i] << endl;
        }
        if (i % 3 == 0) {
            d[i] = min(d[i / 3] + 1, d[i]);
           // cout << "%3 d[i] " << d[i] << endl;
        }
    }
    cout << d[n] << endl;
    return 0;
}
/*
#include<iostream>          // -1���� �ϴ°Ͱ� 2�Ǵ�3���� ������ ����� ���� ������ ������ �ּڰ����ϱ� 
#include<algorithm>
using namespace std;

int main() {
    int num, temp, temp1, count=0, count1=0,mm;
    cin >> num;
    temp = num;
    temp1 = num;
    count1++;
    temp1 = temp1 - 1;
    while (1) {
        if (temp % 3 == 0) {
            count++;
            temp = temp / 3;
        }
        else if (temp % 2 == 0) {
            count++;
            temp = temp / 2;
        }
        else {
            count++;
            temp = temp - 1;
        }
        if (temp == 1) {
            cout << "temp =" << temp << endl;
            break;
        }
        
    }

    while (1) {
        cout <<"temp1ó��"<< temp1<<endl;
        if (temp1 % 3 == 0) {
            count1++;
            temp1 = temp1 / 3;
        }
        else if (temp1 % 2 == 0) {
            count1++;
            temp1 = temp1 / 2;
        }
        else {
            count1++;
            temp1 = temp1 - 1;
        }
        if (temp1 == 1) {
            cout << "temp1 =" << temp1 << endl;
            break;
        }
        
    }
    cout << "count =" << count << endl;
    cout << "count1 =" << count1 << endl;
    mm = min(count, count1);
    cout << mm;
    return 0;
}*/