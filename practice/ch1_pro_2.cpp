#include<iostream>
using namespace std;

int main(void)
{
	const float square_meter = 3.3058;
	double res, input;
	cout << "����� �Է��ϼ��� : ";
	cin >> input;
	res = input * square_meter;
	cout << input << "���� " << res << "������ �Դϴ�." << endl;
	return 0;
	
}