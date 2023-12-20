#include<iostream>
using namespace std;
class Point { //建立点类
private:  //坐标属性设置为私有
	int x;
	int y;
public:
	Point(int m_x, int m_y) {  //构造函数传递参数
		x = m_x;
		y = m_y;
	}
	void setPoint(int i, int j) { //公有函数修改坐标
		x += i;
		y += j;
	}
	void display() {  //公有函数输出坐标
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p(60, 80);//定义对象
	p.setPoint(1, 2);
	p.display();
	return 0;
}