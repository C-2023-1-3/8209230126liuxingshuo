#include<iostream>
using namespace std;
int main() {
	float a;
	float c;
	char b;
	cin >> a;
		cin >> b;
		if (b == '+') {
			cin >> c;
			cout << "=" << a + c;
		}
		else if (b == '-') {
			cin >> c;
			cout << "=" << a - c;
		}
		else if (b == '*') {
			cin >> c;
			cout << "=" << a*c;
		}
		else if (b == '/') {
			cin >> c;
			cout << "=" << a/c;
		}
		else {
			cout << "������Ƿ���";
		}
	return 0;
}