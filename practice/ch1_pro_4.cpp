#include<iostream>
using namespace std;

int main(void)
{
	const int HOUR2SEC = 3600;
	const int MIN2SEC = 60;

	int hour, min, sec, res = 0;
	cout << "�� �� �� �� �Է��ϼ���(������� ����) : ";
	cin >> hour >> min >> sec;
	res += hour * HOUR2SEC;
	res += min * MIN2SEC;
	res += sec;

	cout << hour << "�ð� " << min << "�� " << sec << "�� �� " << res << "�� �Դϴ�." << endl;
	
	return 0;

}