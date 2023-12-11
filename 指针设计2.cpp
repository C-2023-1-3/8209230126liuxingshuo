#include<iostream>
using namespace std;
int parseHex(const char* const hexString) {
	int l = strlen(hexString);
	int ten = 0;
	for (int i = 0; i < l; i++) {
		if (hexString[i] >= 'A' && hexString[i] <= 'F') {
			ten += (hexString[i] - 55) * pow(16, l - i - 1);
		}
		else {
			ten += (hexString[i] - 48) * pow(16, l - i - 1);
		}
}
	return ten;
}
int main() {
	char hexString[100];
	cout << "输入十六进制字符：" << endl;
	cin.getline(hexString, 100);
	cout << hexString << "十进制数为：" << parseHex(hexString) << endl;
	return 0;
}