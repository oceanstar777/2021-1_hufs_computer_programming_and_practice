#include<iostream>
using namespace std;

int main(void)
{
	double height;
	const double INCH = 2.54;
	const double FEET = INCH * 12;
	double res_inch;
	unsigned int res_feet;
	cout << "키를 입력하세요 : ";
	cin >> height;
	res_feet = height / FEET;
	res_inch = (height - res_feet*FEET)/INCH;

	cout << height << "cm는 " << res_feet << "피트 " << res_inch << "인치 입니다" << endl;
	return 0;
	
}