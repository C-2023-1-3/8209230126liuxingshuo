#include<iostream>
using namespace std;
int main(){
	int a, b, c, d, e, f, g, h, i, j, k, l;
	cin >> a;
	cin >> b;
	if (a <= b) c = a;
	else c = b;
	for (d = 2; d <= c; d++) {
		e = a % d; f = b % d;
		if (e == 0 && f == 0) g = d;
	}
	cout << "������������������ǣ�" << g << endl;
	if (a <= b) h = b;
	else h = a;
	for (i = h; i > 0; i++) {
		j = i % a; k = i % b;
		if (j == 0 && k == 0) {
			cout << "������������С�������ǣ�" << i << endl;
			break;
		}
	}
	return 0;
}