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
		cout << "�Է��ϼ���";
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
	cout << "�ǹ����Դϴ�" << endl;
	return;
}
void space(void)
{
	cout << "���鹮���Դϴ�" << endl;
	return;
}
void back(void)
{
	cout << "�齺���̽��Դϴ�" << endl;
	return;
}
void enter(void)
{
	cout << "���� �Դϴ�" << endl;
	return;
}