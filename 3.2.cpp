#include<iostream>
using namespace std;
bool is_prime(int num);
bool  is_prime(int num) {
	int mid = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0) { mid=i; }
	}
	if (mid == 1) { return true; }
	else { return false; }
}
int main() {
	int m = 0;
	for (int i = 1; i <= 200; i++) {
		if (is_prime(i) == true) { cout << i << "\t";
		m++;
		if (m % 10 == 0) { cout << endl; }
		}
}
	system("pause");
	return 0;
}