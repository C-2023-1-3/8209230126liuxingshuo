#include<iostream>
using namespace std;
int main() {
	char a;
	cout << "输入一个大写或小写字母:" << endl;
	cin >> a;
	int b = static_cast<int>(a);
	if (b > 96) {
		int c = b - 32;
		cout <<"这个字母是小写，它的大写形式为：" << static_cast<char>(c) << endl;
	}
	else {
		int d = b + 1;
		cout << "这个字母是大写，它的下一个字符的ASCII码值为：" << d << endl;
	}
	return 0;
}