#include <iostream>
using namespace std;

int main()
{
	char x;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "������һ��������ַ�\n";
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
	cout << "Ӣ����ĸ��" << a << "��\n";
	cout << "������" << b << "��\n";
	cout << "�ո���" << c << "��\n";
	cout << "�����ַ���" << d << "��\n";
	system("pause");
	return 0;
}