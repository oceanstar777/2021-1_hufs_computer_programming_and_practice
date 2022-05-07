#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string subject = "Money";
	string other = "has no value if it is not used.";
	string sentence = subject + other;
	cout << sentence << endl;

	string s1 = "Hello";
	string s2;
	s2 = s1;
	cout << s2 << endl;
	s1 = "world";
	cout << s2 << endl;	//value ÂüÁ¶

	string s3 = "Hello";
	string s4 = "World";
	s3 += s4;
	cout << s3 << endl;

	return 0;

}