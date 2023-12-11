#include<iostream>
using namespace std;
int main() {
	double list[10];
	for (int i = 0; i < 10; i++) {
		cin >> list[i];
	}
	for (int i = 9; i>0; i--) {
		for (int j = 0; j <i; j++) {
		if(list[j]>list[j+1]){
			double mid; 
			mid = list[j];
			list[j] = list[j+1];
			list[j+1] = mid;
		}
		}
	}
	for (int i = 0; i<10; i++) {
		cout << list[i] << "\t";
	}
	system("pause");
	return 0;
}