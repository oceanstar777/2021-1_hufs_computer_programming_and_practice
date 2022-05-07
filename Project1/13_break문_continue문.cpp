//소문자를 대문자로 변경하기
#include<iostream>

using namespace std;

int main(void)
{
	char letter;

	while (1) {
		cout << "소문자를 입력하세요 : ";
		cin >> letter;		//공백문자 제외

		if (letter == 'Q') break;
		if (letter < 'a' || letter>'z') continue;	//처음부터 계속
		letter -= 32;		//소문자 -> 대문자
		
		cout << "변환된 대문자는 " << letter << "입니다." << endl;
	}
	return 0;
}