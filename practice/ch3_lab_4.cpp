#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#define SIZE 80
using namespace std;
void sub_string(char* s, int start, int n, char* result);

int main(void)
{
	int start, len;
	char s1[SIZE], result[SIZE] = { '\0' };
	cout << "���ڿ��� �Է��ϼ��� : ";
	cin >> s1;
	cout << "������ġ : ";
	cin >> start;
	cout << "���� : ";
	cin >> len;

	sub_string(s1, start, len, result);
	cout << result << endl;
}

void sub_string(char* s, int start, int n, char* result)
{
	strncpy(result, s+(start-1), n);
	
	return;
}