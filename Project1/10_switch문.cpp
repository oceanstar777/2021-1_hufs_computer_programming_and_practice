#include<iostream>

using namespace std;

int main(void)
{
	int vowel = 0, consonant = 0;
	char ch;

	cout << "영문자를 입력하고 ctrl-z를 입력하세요" << endl;
	while (cin >> ch)	//ctrl-z = 인터럽트
	{
		switch (ch)
		{
			case 'a':		//의도적인 break 생략 모음 모두 vowel 증가
			case 'e':		//case뒤에 괄호 입력하지 않아도 된다
			case 'i':
			case 'o':
			case 'u':
				vowel++;
				break;		//switch문 탈출
			default:		//default문 필요함
				consonant++;
				break;		//switch문 탈출
		}
	}
	cout << "모음 : " << vowel << endl;
	cout << "자음 : " << consonant << endl;

	return 0;

}