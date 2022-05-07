#include<iostream>
using namespace std;

int main(void)
{
	int cnt = 0;
	for (int a=1; a < 100; a++) {
		for (int b=1; b < 100; b++) {
			for (int c=1; c < 100; c++) {
				if ((a < b) && (a * a + b * b) == c * c) {
					cnt++;
				}
			}
		}
	}
	cout << cnt << endl;
}