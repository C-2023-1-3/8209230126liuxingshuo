#include<iostream>
using namespace std;
class cuboid {
public:
	void setcuboid() { //成员函数设定长方体属性
		cout << "the length is:";
		cin >> length;
		cout << "the width is:";
		cin >> width;
		cout << "the height is:";
		cin >> height;
	}
	void showS(){ //成员函数计算长方体体积
		int S;
		S = length * width * height;
		cout << "the S is:" << S << endl;
	}
private:      //属性设置为私有
	int length;
	int width;
	int height;
};
int main() {
	cuboid s1, s2, s3;//定义三个长方体
	cout << "s1:" << endl;//分别输入长宽高
	s1.setcuboid();//显示体积
	s1.showS();
	cout << "s2:" << endl;
	s2.setcuboid();
	s2.showS();
	cout << "s3:" << endl;
	s3.setcuboid();
	s3.showS();
	return 0;
}