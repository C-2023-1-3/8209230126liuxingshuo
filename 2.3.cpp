#include<iostream>
using namespace std;
int main() {
	cout << "���������������߳�:" << endl;
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "�޷�����������" << endl;
	}
	else {
		if (a == b || b == c || c == a) {
			cout << "���Թ��ɵ��������Ρ�" << endl;
			cout << "�������ܳ�Ϊ��" << a + b + c << endl;
		}
		else {
			cout << "�����Թ��ɵ��������Ρ�" << endl;
			cout << "�������ܳ�Ϊ��" << a + b + c << endl;
		}
	}
return 0;
}