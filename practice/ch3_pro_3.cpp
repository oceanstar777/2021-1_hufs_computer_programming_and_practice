#include<iostream>
using namespace std;

int main(void)
{
	const int n = 10;
	double m, v, sum = 0, s_sum = 0;
	
	double arr[n];

	cout << "10���� �Ǽ��� �Է��ϼ��� : ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	m = sum / (double)n;
	cout << "��� : " << m << endl;

	for (int i = 0; i < n; i++)
	{
		s_sum = (arr[i] - m) * (arr[i] - m);
	}
	v = s_sum / (double)n;

	cout << "ǥ������ : " << v << endl;
	
	return 0;
}