#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string s("Hello world!");

	s.erase(3, 2);
	cout << s << endl;
}