#include<iostream>
using namespace std;
int sum = 1;
int day = 1;
int peach(int sum) {
	if (day < 10) {
		day++;
		return peach((sum + 1) * 2);
	}
	else if (day == 10) { return sum; }
}
int main() {
	cout <<peach(1)<< endl;
	system("pause");
	return 0;
}