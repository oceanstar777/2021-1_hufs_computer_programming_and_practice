#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void)
{
	vector<int> v(10);	//vector<�ڷ���> ������(ũ��, ����Ʈ��) 
						//����Ʈ�� 
						//���� 0
	v.push_back(10);
	v.pop_back();
				    //v.insert(index,�ڷ�)
	cout<<v.size()<<endl;
	//v.erase();
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout <<*it << endl;
	}


}