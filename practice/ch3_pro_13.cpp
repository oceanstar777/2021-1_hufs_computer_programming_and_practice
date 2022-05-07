#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string s1 = "A fool and his mony are parted";
	string findstring = "mony";
	string replace = "money";
	s1.replace(s1.find(findstring), findstring.length(), replace);
	cout << s1.find(findstring) << endl;
	cout << s1 << endl;

}