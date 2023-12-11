#include<iostream>
using namespace std;
int a[10];
int main()
{
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		if (i > 0)
			for (int j = i; j > 0; j--)
				if (a[j] > a[j - 1]) {
					int temp = a[j];
					a[j] = a[j - 1];
					a[j - 1] = temp;
				}
	}
	int k = 0;
	for (int i = 1; i < 10; i++) {
		if (a[i] == a[i - 1])
			continue;
		else
			a[++k] = a[i];
	}
	for (int i = 0; i <= k; i++)
		cout << a[i] << "  ";
	return 0;
}