#include<iostream>
using namespace std;
int get_max(int n);
int get_min(int n);
int get_avg(int n);

int main(void) {
	int n,max,min,avg;
	while (true)
	{
		cout << "�����͸� �Է��ϼ���(�����̸� ����):";
		cin >> n;
		if (n < 0) break;
		max = get_max(n);
		min = get_min(n);
		avg = get_avg(n);
	}
	cout << "�����" << avg << "�Դϴ�." << endl;
	cout << "�ִ밪�� " << max << "�Դϴ�." << endl;
	cout << "�ּҰ��� " << min << "�Դϴ�." << endl;

	return 0;
}
int get_avg(int n)
{
	static int sum = 0,cnt = 0;
	sum += n;
	cnt++;

	return (double)sum / (double)cnt;

}


int get_max(int n)
{
	static int max = n;
	if (max < n)
		max = n;
	return max;
}
int get_min(int n)
{
	static int min = n;
	if (min > n)
		min = n;
	return min;
}
