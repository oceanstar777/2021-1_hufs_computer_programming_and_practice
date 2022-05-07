#include<iostream>
#define SEED 1000

using namespace std;

int year_rate(double money);

int main(void)
{
	int res_year = year_rate(SEED);
	cout << res_year << "³â" << endl;

	return 0;
}

int year_rate(double money)
{
	static int year =  0;
	if (money >= SEED*2)
	{
		return year;
	}
	year++;
	return year_rate(money * 1.07);

}