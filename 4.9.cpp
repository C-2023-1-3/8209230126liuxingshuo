#include<iostream>
using namespace std;
int raise(int n[], int m) {
	for (int i = m; i > 0; i--) {
		for (int j = 0; j < i-1; j++) {
			if (n[j] > n[j + 1]) {
				int mid;
				mid = n[j];
				n[j] = n[j + 1];
				n[j + 1] = mid;
			}
		}
	}
	return true;
}
int main() {
	int m= 0;
	cout << "输入元素个数：";
	cin >> m;
	int* p = new int[m];
	cout << "输入各元素：" << endl;
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	raise(p, m);
	for (int i = 0; i < m; i++) {
		cout << p[i] << '\t';
	}
	delete p;
	system("pause");
	return 0;
}