#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string s1 = "pointer is easy";
	if ((s1[0] >= 'a') && (s1[0] <= 'z'))
		s1[0] -= 32;
	int len = s1.length();
	if (s1[len - 1] != '.')
		s1 += '.';
	cout << s1 << endl;
}