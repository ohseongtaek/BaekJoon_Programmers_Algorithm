#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str;
    cin >> str; //55-50+40
    int result = 0;
    string temp = "";
   
    bool minus = false;
    for (int i = 0; i <= str.size(); i++)
    {
        //�������� ���
        if (str[i] == '+' || str[i] == '-' || str[i] == '\0')
        {
            if (minus)
                result = result - stoi(temp);
            else
                result = result + stoi(temp);
            temp = ""; //�ʱ�ȭ
            //��ȣ�� ���� ���Ŀ� ġ�� �ּ�
            if (str[i] == '-'){
                minus = true;
            }
            continue;
        }
        //�ǿ������� ���
        temp = temp + str[i];
    }
    cout << result << endl;
    return 0;
}