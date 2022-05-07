#include<iostream>
using namespace std;

double F2C(double f);
double C2F(double c);

int main(void)
{
	int choice;
	double temp;

	while(1)
	{
		cout << "번호를 입력하세요 종료하려면 0입력" << endl;
		cout << "1.화씨를 섭씨로 바꾸기" << endl;
		cout << "2.섭씨를 화씨로 바꾸기" << endl;
		cin >> choice;
		if (choice == 0) break;
		switch (choice)
		{
		case 1:
			cout << "화씨온도를 입력하세요 : ";
			cin >> temp;
			cout << "섭씨온도는" << F2C(temp) << "입니다." << endl<<endl;
			break;
		case 2:
			cout << "섭씨온도를 입력하세요 : ";
			cin >> temp;
			cout << "화씨온도는" << C2F(temp) << "입니다." << endl<<endl;
			break;
		default:
			cout << "잘못 입력하셨습니다." << endl<<endl;
			break;
		}
	}
	
	return 0;
}

double F2C(double f)
{
	double c;
	c = (5.0 / 9.0) * (f - 32);
	return c;
}
double C2F(double c)
{
	double f;
	f = (9.0 / 5.0) * c + 32;
	return f;
}