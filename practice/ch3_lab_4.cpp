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
	cout << "문자열을 입력하세요 : ";
	cin >> s1;
	cout << "시작위치 : ";
	cin >> start;
	cout << "길이 : ";
	cin >> len;

	sub_string(s1, start, len, result);
	cout << result << endl;
}

void sub_string(char* s, int start, int n, char* result)
{
	strncpy(result, s+(start-1), n);
	
	return;
}