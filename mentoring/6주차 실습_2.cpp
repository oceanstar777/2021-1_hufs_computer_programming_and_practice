#include <iostream>
using namespace std;
int main(void)
{
    int data[100];
    int num;

    cin >> num; // �������� �� �޾ƿ���.
    for (int i = 0; i < num; i++)
        cin >> data[i]; // �������� ����ŭ �ݺ��Ͽ� ������ �޾ƿ� �迭 input�� �ֱ�.

    data[2] = 0;
    data[num - 1] -= 10;
    for (int i = 0; i < num; i++)
    {
        data[i] *= 2;
        cout << data[i] << ' ';
    }
    // your code

    return 0;
}