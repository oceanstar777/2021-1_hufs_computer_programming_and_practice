#include<iostream>
using namespace std;

int main(void)
{
	double height;
	const double INCH = 2.54;
	const double FEET = INCH * 12;
	double res_inch;
	unsigned int res_feet;
	cout << "Ű�� �Է��ϼ��� : ";
	cin >> height;
	res_feet = height / FEET;
	res_inch = (height - res_feet*FEET)/INCH;

	cout << height << "cm�� " << res_feet << "��Ʈ " << res_inch << "��ġ �Դϴ�" << endl;
	return 0;
	
}