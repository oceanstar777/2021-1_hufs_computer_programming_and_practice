#include<iostream>
using namespace std;
#define SIZE 5

bool array_equal(int a[], int b[], int size);

int main(void)
{
	int arr1[SIZE];
	int arr2[SIZE];
	
	cout << "�迭 1�� ��Ҹ� �Է��ϼ��� : " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr1[i];
	}

	cout << "�迭 2�� ��Ҹ� �Է��ϼ��� : " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr2[i];
	}
	if (array_equal(arr1, arr2, SIZE)) {
		cout << "�� �迭�� �����ϴ�." << endl;
	}
	else cout << "�� �迭�� �ٸ��ϴ�." << endl;
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
