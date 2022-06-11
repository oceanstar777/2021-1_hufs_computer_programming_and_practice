#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string s("Hello world!");
	int i = s.find("w", 0);
	cout << i << endl;
}