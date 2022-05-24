#include <iostream>
using namespace std;
int main() {
    char a1[20] = "abcdefghijklmnopqrs";
    char a2[20] = "abcdefghijklmnopqrs";
    char a3[20] = "abcdefghijklmnopqrs";
    char* p = a3;

    //방법 1. 인덱스 사용해서 a1 수정
    a1[4] = ' ';
    //방법 2. 배열 이름 사용해서 a2 수정
    a2[4] = ' ';
    //방법 3. 포인터 변수 p사용해서 a3 수정
    *(p + 4) = ' ';

    cout << a1 << endl;
    cout << a2 << endl;
    cout << a3 << endl;
    return 0;
}