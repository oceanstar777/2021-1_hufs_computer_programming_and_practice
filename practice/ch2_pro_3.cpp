#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

void tab(void);
void space(void);
void back(void);
void enter(void);

int main(void)
{
	char c;
	while (true)
	{
		cout << "입력하세요";
		c = getchar();
		getchar();
		switch (c)
		{
		case '\n':
			enter();
			break;
		case '\t':
			tab();
			break;
		case '\b':
			back();
			break;
		case ' ':
			space();
			break;
		default:
			cout << "no" << endl;
			break;
		}
	}
}

void tab(void)
{
	cout << "탭문자입니다" << endl;
	return;
}
void space(void)
{
	cout << "공백문자입니다" << endl;
	return;
}
void back(void)
{
	cout << "백스페이스입니다" << endl;
	return;
}
void enter(void)
{
	cout << "엔터 입니다" << endl;
	return;
}