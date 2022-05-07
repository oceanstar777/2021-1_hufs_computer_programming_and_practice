#include<iostream>
using namespace std;
int get_max(int n);
int get_min(int n);
int get_avg(int n);

int main(void) {
	int n,max,min,avg;
	while (true)
	{
		cout << "데이터를 입력하세요(음수이면 종료):";
		cin >> n;
		if (n < 0) break;
		max = get_max(n);
		min = get_min(n);
		avg = get_avg(n);
	}
	cout << "평균은" << avg << "입니다." << endl;
	cout << "최대값은 " << max << "입니다." << endl;
	cout << "최소값은 " << min << "입니다." << endl;

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
