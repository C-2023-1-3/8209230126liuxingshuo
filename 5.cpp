#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float a;
	cout << "�����¶�Ϊ:";
	cin >> a;
	float b = 5 * (a - 32) / 9;
	int c = b * 100;
	b = c / 100.0;
	cout << "�����¶�Ϊ:" <<b<< "��; " << endl;
	return 0;
}