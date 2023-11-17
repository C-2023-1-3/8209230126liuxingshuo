#include <iostream>
using namespace std;

int main()
{
	char x;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "请输入一串任意的字符\n";
	while ((x = getchar()) != '\n')
	{
		if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
			a++;
		else if (x >= '0' && x <= '9')
			b++;
		else if (x == ' ')
			c++;
		else
			d++;
	}
	cout << "英文字母有" << a << "个\n";
	cout << "数字有" << b << "个\n";
	cout << "空格有" << c << "个\n";
	cout << "其它字符有" << d << "个\n";
	system("pause");
	return 0;
}