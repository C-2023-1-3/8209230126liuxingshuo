#include <iostream>
using namespace std;

const int num1 = 26;   //��ĸ����26
const int num2 = 99; 

void countLetters(const char list[], int counts[])//��ͳ�ƽ��¼�����飻
{
	for (int i = 0; i < num1; i++)
		counts[i] = 0;
	for (int j = 0; j < num2; j++)
	{
		counts[list[j] - 'a']++;
		counts[list[j] - 'A']++;
	}//���Ǵ�Сд��ĸ���ַ�����õ��ַ��롮a����A���ľ��룬����ͳ�ơ�
}
void displayCounts(const int counts[])//���ͳ�ƽ��
{
	for (int i = 0; i < num1; i++) {
		if (counts[i] != 0)
			cout << static_cast<char>(i + 'a') << " : " << counts[i] << "  times " << endl;
		//(i+'a')ǿתΪ��Ӧ�ַ�������ʾ���ִ�����
	}
}

int main()
{
	char list[num2];
	int counts[num1];
	cout << "Enter a string : ";
	cin.getline(list, num2);
	countLetters(list, counts);
	displayCounts(counts);
	return 0;
}