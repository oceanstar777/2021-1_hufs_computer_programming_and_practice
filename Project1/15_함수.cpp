//c����� �Լ��� ��ȯ���� 1��
//�ʿ伺
//1.�ݺ��� ��
//2.���ȭ -> ������ ������ �� �ش� ��⸸ ã�ƺ��� �ȴ�
// ������Ʈ�� ����, �� ���� ���α׷��� © �� �ִ�.
//  
//
#include<iostream>
using namespace std;

int add(int x, int y);

int main(void)
{
	int x, y;
	cin >> x >> y;
	printf("%d", add(x, y));
	return 0;
}


int add(int x, int y)
{
	int result;
	result = x + y;
	return result;
}
