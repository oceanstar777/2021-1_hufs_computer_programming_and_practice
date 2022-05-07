#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int get_number();
bool is_winning_ticket(int number);


int main(void)
{
	int number = get_number();
	cout.setf(cout.boolalpha);
	cout << "당첨여부 : " << is_winning_ticket(number) << endl;
}

int get_number()
{
	int number;
	cout << "번호를 입력하세요 : ";
	cin >> number;
	return number;
}

bool is_winning_ticket(int number)
{
	srand((unsigned int)time(NULL));
	int ans = rand() % 100 + 1;	
	if (ans == number) {
		return true;
	}
	else return false;
}