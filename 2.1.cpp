#include<iostream>
using namespace std;
int main() {
	char a;
	cout << "����һ����д��Сд��ĸ:" << endl;
	cin >> a;
	int b = static_cast<int>(a);
	if (b > 96) {
		int c = b - 32;
		cout <<"�����ĸ��Сд�����Ĵ�д��ʽΪ��" << static_cast<char>(c) << endl;
	}
	else {
		int d = b + 1;
		cout << "�����ĸ�Ǵ�д��������һ���ַ���ASCII��ֵΪ��" << d << endl;
	}
	return 0;
}