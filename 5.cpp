#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float a;
	cout << "华氏温度为:";
	cin >> a;
	float b = 5 * (a - 32) / 9;
	int c = b * 100;
	b = c / 100.0;
	cout << "摄氏温度为:" <<b<< "℃; " << endl;
	return 0;
}