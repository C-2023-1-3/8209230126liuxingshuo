#include<iostream>
using namespace std;
int peach() {
	int day = 1;
	int sum = 1;
	while (day<10) {
		sum = (sum + 1) * 2;
		day++;
	}
	return sum;
}
int main() {
	cout << peach() << endl;

	system("pause");
	return 0;
}