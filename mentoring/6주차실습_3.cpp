#include <iostream>
using namespace std;
int main() {
    char a1[20] = "abcdefghijklmnopqrs";
    char a2[20] = "abcdefghijklmnopqrs";
    char a3[20] = "abcdefghijklmnopqrs";
    char* p = a3;

    //��� 1. �ε��� ����ؼ� a1 ����
    a1[4] = ' ';
    //��� 2. �迭 �̸� ����ؼ� a2 ����
    a2[4] = ' ';
    //��� 3. ������ ���� p����ؼ� a3 ����
    *(p + 4) = ' ';

    cout << a1 << endl;
    cout << a2 << endl;
    cout << a3 << endl;
    return 0;
}