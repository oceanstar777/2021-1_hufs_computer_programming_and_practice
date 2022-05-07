#include<iostream>
#include<string>
using namespace std;

class ParentClass {
private:
	int x;
protected:
	int y;
public:
	int z;
};

class ChildClass1:public ParentClass{};
class ChildClass2:protected ParentClass{};
class ChildClass3:private ParentClass{};

int main(void)
{
	ChildClass1 obj1;
	ChildClass2 obj2;
	ChildClass3 obj3;

	cout << obj1.x << endl;		//�Ұ��� �θ�Ŭ������ private����� ��ӵ��� �ʴ´�
	cout << obj1.y << endl;		//�Ұ��� �θ�Ŭ������ protected����� ��ӵ����� protected����� �ܺο��� ���ٺҰ�
	cout << obj1.z << endl;		//����

	cout << obj2.x << endl;		//�Ұ��� �θ�Ŭ������ private����� ��ӵ��� �ʴ´�
	cout << obj2.y << endl;		//�Ұ��� �θ�Ŭ������ protected�� ��ӹ޾����Ƿ� �θ�Ŭ������
	//protected����� protected����� ��� �ܺο��� ���� �Ұ��ϴ�
	cout << obj3.x << endl;	//�Ұ���
	cout << obj3.y << endl;	//�Ұ���
	cout << obj3.z << endl;	//�Ұ���

}