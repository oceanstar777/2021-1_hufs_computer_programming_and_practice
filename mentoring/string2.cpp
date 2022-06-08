#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string s1 = "hello I'm I 00";
	string s2 = "I";
	cout.setf(cout.boolalpha);
	cout << s1.empty()<<endl;		//비었으면 true 안비었으면 false
	cout << s2.empty()<<endl;

	int i = s1.find(s2) + 1;
	cout << s1.find(s2,i) << endl;

	return 0;
}