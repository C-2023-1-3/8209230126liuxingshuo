#include<iostream>
using namespace std;
class cuboid {
public:
	void setcuboid() { //��Ա�����趨����������
		cout << "the length is:";
		cin >> length;
		cout << "the width is:";
		cin >> width;
		cout << "the height is:";
		cin >> height;
	}
	void showS(){ //��Ա�������㳤�������
		int S;
		S = length * width * height;
		cout << "the S is:" << S << endl;
	}
private:      //��������Ϊ˽��
	int length;
	int width;
	int height;
};
int main() {
	cuboid s1, s2, s3;//��������������
	cout << "s1:" << endl;//�ֱ����볤���
	s1.setcuboid();//��ʾ���
	s1.showS();
	cout << "s2:" << endl;
	s2.setcuboid();
	s2.showS();
	cout << "s3:" << endl;
	s3.setcuboid();
	s3.showS();
	return 0;
}