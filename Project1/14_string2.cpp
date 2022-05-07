#include<iostream>
using namespace std;

int main(void)
{
	char str[30] = "C++ language is easy.";
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	cout << "strÀÇ ±æÀÌ : " << i << endl;

	return 0;
}
