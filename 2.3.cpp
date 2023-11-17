#include<iostream>
using namespace std;
int main() {
	cout << "输入三角形三条边长:" << endl;
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "无法构成三角形" << endl;
	}
	else {
		if (a == b || b == c || c == a) {
			cout << "可以构成等腰三角形。" << endl;
			cout << "三角形周长为：" << a + b + c << endl;
		}
		else {
			cout << "不可以构成等腰三角形。" << endl;
			cout << "三角形周长为：" << a + b + c << endl;
		}
	}
return 0;
}