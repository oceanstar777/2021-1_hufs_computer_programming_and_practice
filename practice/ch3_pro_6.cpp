#include<iostream>
using namespace std;
#define SIZE 5

bool array_equal(int a[], int b[], int size);

int main(void)
{
	int arr1[SIZE];
	int arr2[SIZE];
	
	cout << "배열 1의 요소를 입력하세요 : " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr1[i];
	}

	cout << "배열 2의 요소를 입력하세요 : " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr2[i];
	}
	if (array_equal(arr1, arr2, SIZE)) {
		cout << "두 배열은 같습니다." << endl;
	}
	else cout << "두 배열은 다릅니다." << endl;
	return 0;
}
bool array_equal(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] != b[i]) {
			return false;
		}
	}
	return true;
}
