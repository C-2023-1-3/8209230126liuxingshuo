#include<iostream>
using namespace std;
int main() {
	float a, b, c;
	cout << "输入a的值:";
	cin >> a;
	b = a;
	while (1) {
		c = b;
		b = (b + a / b) / 2;
			float d = b - c;
			if (d<1e-5&& d>-1e-5) {
				cout << "a的平方根为：" << b;
				break;
			}
	}
	return 0;
}