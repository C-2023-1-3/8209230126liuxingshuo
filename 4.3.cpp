#include<iostream>
using namespace std;
int main() {
	bool box[100];
	for (int i = 0; i < 100; i++) {
		box[i] = false;
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; i+j < 100; j = j + i + 1) {
			box[j + i] = !box[j + i];
		}
	}
	for (int i = 0; i < 100; i++) {
		if (box[i] == true) { cout << i + 1<<'\t'; }
	}
	system("pause");
	return 0;
}