#include<iostream>
#include<string>
using namespace std;
#define SIZE 26
int main(void)
{
	string input_str;
	cout << "문자열을 입력하세요 : ";
	getline(cin, input_str);
	int freq[SIZE] = { 0, };
	int len = input_str.length();

	for (int i = 0; i < len; i++)
	{
		if((input_str[i]>='a')&&(input_str[i]<='z'))
			freq[input_str[i] - 'a']++;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << (char)(i + 'a') << " : " << freq[i]<<endl;
	}
}
