#include<iostream>
using namespace std;
int main() {
	int r;
	int h;
	cout << "圆锥底面半径为:";
	cin >> r;
	cout << "圆锥高为:";
	cin >> h;
	const float HI = 3.14;
	cout << "圆锥体积为:" << (HI * r * r * h) / 3 << endl;

	return 0;
}