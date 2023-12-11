#include<iostream>
using namespace std;
void divv(int&a, int&b){
	int c; int d;
	int min; int div_max;
if (a <= b) { min = a; }
else { min = b; }
for (int i = 1; i <= min; i++) {
	c = a % i; d = b % i;
	if (c == 0 && d == 0) { div_max = i; }
}
cout << "这两个数的最大公约数是：" << div_max << endl;
}
void mul(int&a, int&b) {
	int c; int d;
	int max; int mul_min;
	if (a <= b) { max = b; }
	else { max = a; }
	for (int i = max;i>max-1; i++) {
	c = i % a;d = i % b;
	if (c == 0 && d == 0) { mul_min = i; break; }
	}
	cout << "这两个数的最小公倍数是：" << mul_min << endl;
}
int main() {
	int a; int b;
	cin >> a; cin >> b;
	divv(a, b);
	mul(a, b);
	system("pause");
	return 0;
}