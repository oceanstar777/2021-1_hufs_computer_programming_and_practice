#include<iostream>
#include<string>
using namespace std;


int main(void)
{
	string name, what2do;
	cout << "당신의 이름을 입력하세요 : ";
	cin >> name;
	cout << name << "씨 무엇을 해드릴까요?"<<endl;
	cout << "할일을 입력하세요 : ";
	cin >> what2do;
	cout << what2do << "는 할 수 없습니다." << endl;

	return 0;
}