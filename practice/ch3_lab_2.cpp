#include<iostream>
#include<string>
using namespace std;

inline int add(int x1, int x2);
inline int sub(int x1, int x2);
inline int mul(int x1, int x2);
inline double div(double x1, double x2);

int main(void)
{
	string op1, oprend, op2;
	cout << "���ڿ��� �Է��Ͻÿ� : ";
	cin >> op1 >> oprend >> op2;
	if (oprend == "add")
	{
		cout<< add(stoi(op1), stoi(op2))<<endl;
	}
	if (oprend == "sub")
	{
		cout << sub(stoi(op1), stoi(op2)) << endl;
	}
	if (oprend == "mul")
	{
		cout << mul(stoi(op1), stoi(op2)) << endl;
	}
	if ((oprend == "div")&&(op2!="0"))
	{
		cout << div(stod(op1), stod(op2)) << endl;
	}
	else {
		cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
	}
}


inline int add(int x1, int x2)
{
	return (x1 + x2);
}
inline int sub(int x1, int x2)
{
	return (x1 - x2);
}
inline int mul(int x1, int x2)
{
	return (x1 * x2);
}
inline double div(double x1, double x2)
{
	return (x1 / x2);
}