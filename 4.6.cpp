#include <iostream>
using namespace std;

const int num1 = 26;   //字母种类26
const int num2 = 99; 

void countLetters(const char list[], int counts[])//将统计结果录入数组；
{
	for (int i = 0; i < num1; i++)
		counts[i] = 0;
	for (int j = 0; j < num2; j++)
	{
		counts[list[j] - 'a']++;
		counts[list[j] - 'A']++;
	}//考虑大小写字母，字符相减得到字符与‘a’或‘A’的距离，并做统计。
}
void displayCounts(const int counts[])//输出统计结果
{
	for (int i = 0; i < num1; i++) {
		if (counts[i] != 0)
			cout << static_cast<char>(i + 'a') << " : " << counts[i] << "  times " << endl;
		//(i+'a')强转为对应字符，并显示出现次数；
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