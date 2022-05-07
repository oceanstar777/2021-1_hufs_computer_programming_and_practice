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

	cout << "증가전 pc : " << (void*)pc<<endl;
	cout << "증가전 pd : " << pd<<endl;
	cout << "증가전 pi : " << pi << endl;
	cout << endl;
	pc++;
	pd++;
	pi++;

	cout << "증가후 pc : " << (void*)pc << endl;
	cout << "증가후 pd : " << pd << endl;
	cout << "증가후 pi : " << pi << endl;

	return 0;
}