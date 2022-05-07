#include<iostream>
using namespace std;

int main(void)
{
	unsigned short a, b, c;
	int volume;
	cout << "길이를 입력하세요 : ";
	cin >> a;
	cout << "너비를 입력하세요 : ";
	cin >> b;
	cout << "높이를 입력하세요 : ";
	cin >> c;
	volume = a * b * c;

	cout << "상자의 체적 : " << volume << endl;

	return 0;
}