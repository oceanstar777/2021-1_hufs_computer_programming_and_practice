#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	cout.setf(cout.boolalpha);
	string a= "123";
	a.insert(2, "abc");
	cout << a << endl;
	a.erase(1, 3);
	cout << a << endl;

	cout<<a.empty()<<endl;
	string b;
	a.find(b,1);	//a.find(ã�� ���ڿ�, Ž�� ������ġ);
	cout << a.size() << endl;	//���ڿ� ����
}