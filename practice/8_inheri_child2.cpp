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

	cout << obj1.x << endl;		//불가능 부모클래스의 private멤버는 상속되지 않는다
	cout << obj1.y << endl;		//불가능 부모클래스의 protected멤버는 상속되지만 protected멤버는 외부에서 접근불가
	cout << obj1.z << endl;		//가능

	cout << obj2.x << endl;		//불가능 부모클래스의 private멤버는 상속되지 않는다
	cout << obj2.y << endl;		//불가능 부모클래스를 protected로 상속받았으므로 부모클래스의
	//protected멤버는 protected멤버로 상속 외부에서 접근 불가하다
	cout << obj3.x << endl;	//불가능
	cout << obj3.y << endl;	//불가능
	cout << obj3.z << endl;	//불가능

}