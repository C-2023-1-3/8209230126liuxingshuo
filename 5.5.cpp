#include<iostream>
using namespace std;
class Point { //��������
private:  //������������Ϊ˽��
	int x;
	int y;
public:
	Point(int m_x, int m_y) {  //���캯�����ݲ���
		x = m_x;
		y = m_y;
	}
	void setPoint(int i, int j) { //���к����޸�����
		x += i;
		y += j;
	}
	void display() {  //���к����������
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p(60, 80);//�������
	p.setPoint(1, 2);
	p.display();
	return 0;
}