#include<iostream>
using namespace std;

int main(void)
{
	char* pc = NULL;
	double* pd = NULL;
	int* pi = NULL;

	pc = (char*)10000;
	pd = (double*)10000;
	pi = (int*)10000;

	cout << "������ pc : " << (void*)pc<<endl;
	cout << "������ pd : " << pd<<endl;
	cout << "������ pi : " << pi << endl;
	cout << endl;
	pc++;
	pd++;
	pi++;

	cout << "������ pc : " << (void*)pc << endl;
	cout << "������ pd : " << pd << endl;
	cout << "������ pi : " << pi << endl;

	return 0;
}