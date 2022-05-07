#include<iostream>
#include<cmath>
using namespace std;


inline int dist_2d(int x1, int y1, int x2, int y2);
int main(void)
{
	int x1, y1, x2, y2;
	cout << "두점을 입력하세요 : (x1,y1,x2,y2) ";
	cin >> x1 >> y1 >> x2 >> y2;
	cout << "두점사이의 거리 : " << dist_2d(x1, y1, x2, y2) << endl;
	return 0;
}

inline int dist_2d(int x1, int y1, int x2, int y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}