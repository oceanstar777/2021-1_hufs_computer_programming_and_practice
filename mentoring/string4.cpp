#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string s1 = "apple";
	string s2 = "watermelon";
	if (s1 < s2)
	{
		cout << s1 << "<" <<s2 << endl;
	}
	else
	{
		cout << s1 << ">"<<s2 << endl;
	}
}