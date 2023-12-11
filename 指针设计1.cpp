#include<iostream>
using namespace std;
int indexOf(const char *s1, const char *s2) {
	if (s2[0] == 0)
		return 0;
	for (int i = 0; s1[i]; ++i) {
		int k = i, j = 0;
		for (; s2[j]; ++k, ++j) {
			if (s1[k] != s2[j])
				break;
		}
		if (s2[j] == 0)
			return i + 1; 
	}
	return -1;
}
int main()
{
	cout << " Enter the first string : " << endl;
	string s1;
	cin >> s1;
	const char* str1 = NULL;
	str1 = s1.c_str();
	cout << " Enter the second string : " << endl;
	string s2;
	cin >> s2;
	const char* str2 = NULL;
	str2 = s2.c_str();
	int a = indexOf(str1, str2);
	cout << a;
	system("pause");
	return 0;
}