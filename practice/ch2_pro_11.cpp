#include<iostream>
using namespace std;

void save(int amount);

int main(void)
{
	int money;

	while (true)
	{
		cout << "�� : ";
		cin >> money;
		save(money);
	}

	return 0;
}

void save(int amount)
{
	static int s = 0;
	s += amount;
	cout << "�� ����� : " << s << endl;
	return;
}