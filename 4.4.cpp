#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int m = 0;
	cout << "The merged list is ";
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++) {
		list3[i + size1] = list2[i];
	}
	for (int i = size1+size2-2; i > 0; i--) {
		for (int j = 0; j <i; j++) {
			if (list3[j] > list3[j + 1]) {
				double mid;
				mid = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = mid;
			}
		}
	}
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << '\t';
	}
}
	int main() {
		int list1[80];
		int list2[80];
		int size1 = 0; int size2 = 0;
		cout << "Enter list1:";
		cin >> size1;
		for (int i = 0; i <size1; i++) { cin >>list1[i] ; }
		cout << "Enter list2:";
		cin >> size2;
		for (int i = 0; i < size2; i++) { cin >>list2[i]; }
	    int list3[80];
		merge(list1, size1, list2, size2, list3);
		system("pause");
		return 0;
	}