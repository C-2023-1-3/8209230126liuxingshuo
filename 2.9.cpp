#include<iostream>
using namespace std;
int main() {
	int a;
	int b = 0;
	int c = 0;
		for(a = 2; a <= 100;a=a*2) {
			b = b + a;
			c++;
		}
		cout << "每天平均花的钱数为：" << 0.8 * b / c << endl;
		return 0;
}