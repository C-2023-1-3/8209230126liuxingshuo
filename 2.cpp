#include<iostream>
using namespace std;
int main() {
	int r;
	int h;
	cout << "Բ׶����뾶Ϊ:";
	cin >> r;
	cout << "Բ׶��Ϊ:";
	cin >> h;
	const float HI = 3.14;
	cout << "Բ׶���Ϊ:" << (HI * r * r * h) / 3 << endl;

	return 0;
}