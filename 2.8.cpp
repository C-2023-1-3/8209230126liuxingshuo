#include<iostream>
using namespace std;
int main() {
	float a, b, c;
	cout << "����a��ֵ:";
	cin >> a;
	b = a;
	while (1) {
		c = b;
		b = (b + a / b) / 2;
			float d = b - c;
			if (d<1e-5&& d>-1e-5) {
				cout << "a��ƽ����Ϊ��" << b;
				break;
			}
	}
	return 0;
}