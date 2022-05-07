#include<iostream>
using namespace std;

int main(void)
{
	const int MONTH = 12;
	int days[MONTH] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 0; i < MONTH; i++)
	{
		cout << i + 1 << "월은 " << days[i] << "일까지 있습니다." << endl;
	}
	return 0;
}