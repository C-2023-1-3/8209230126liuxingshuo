#include<iostream>
using namespace std;
int main() {
	cout << "ÇëÊäÈëxµÄÖµ£º";
	float d;
	cin >> d;
	float e;
	cout << "y=";
	if (0 < d &&d< 1) {
		e = 3.0 - (2.0 * d);
		cout <<e<< endl;
	}
	else if (1 <= d && d<5) {
		e = 1.0 / (2.0 * d) + 1.0;
		cout << e << endl;
	}
	else {
		e = d * d;
		cout << e<< endl;
	}
	return 0;
}