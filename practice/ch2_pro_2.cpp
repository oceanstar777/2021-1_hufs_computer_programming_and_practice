#include<iostream>
using namespace std;

void print_guide(void);
inline int add(int x, int y);
inline double add(double x, double y);
inline int subtract(int x, int y);
inline double subtract(double x, double y);
inline int multiply(int x, int y);
inline double mulitply(double x, double y);
inline double divide(double x, double y);

int main(void)
{
	char choice;
	int x, y;
	while (true)
	{
		print_guide();
		cout << "������ �����Ͻÿ� : ";
		cin >> choice;
		
		if (choice == 'Q') break;

		cout << "�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ";
		cin >> x>>y;
		switch (choice)
		{
			case '+':
				cout << add(x, y) << endl;
				break;
			case '-':
				cout << subtract(x, y) << endl;
				break;
			case '*':
				cout << multiply(x, y) << endl;
				break;
			case '/':
				if (y == 0) {
					cout << "0���� ���� �� �����ϴ�." << endl;
					break;
				}
				else {
					cout << divide(x, y) << endl;
					break;
				}
			default:
				cout << "�߸� �Է��߽��ϴ�." << endl;
				break;
		}
	}
}

void print_guide(void) {
	cout << "********************" << endl;
	cout << "+ add" << endl;
	cout << "- subtract" << endl;
	cout << "* mulitply" << endl;
	cout << "/ divide" << endl;
	cout << "*********************" << endl;
	return;
}
inline int add(int x, int y) {
	return (x + y);
}
inline double add(double x, double y) {
	return (x + y);
}
inline int subtract(int x, int y) {
	return (x - y);
}
inline double subtract(double x, double y) {
	return (x - y);
}
inline int multiply(int x, int y) {
	return (x * y);
}
inline double mulitply(double x, double y) {
	return (x * y);
}
inline double divide(double x, double y) {
	return (x / y);
}




