#include<iostream>

using namespace std;

int main(void)
{
	int n;
	int i = 1;
	cout << "출력하고 싶은 단을 입력하세요 : ";
	cin >> n;

	while (i <= 9)
	{
		cout << n << " * " << i <<" = "<< n * i << endl;
		i++;
	}

	return 0;
}