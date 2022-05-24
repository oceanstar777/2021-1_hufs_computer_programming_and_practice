#include <iostream>
using namespace std;
int main(void)
{
    int data[100];
    int num;

    cin >> num; // 데이터의 수 받아오기.
    for (int i = 0; i < num; i++)
        cin >> data[i]; // 데이터의 수만큼 반복하여 데이터 받아와 배열 input에 넣기.

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