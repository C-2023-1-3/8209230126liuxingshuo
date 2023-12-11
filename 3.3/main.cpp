#include<iostream>
#include"mytemperature.h"
using namespace std;
int main() {
	double i; double j;
	cout << "Celsius\t" << "Fahrenheit" << "|" << "Fahrenheit " << "Celsius" << endl;
	for (i = 40.0,j = 120.0; i >= 31.0; i--, j -= 10)
	{
		cout <<i << "\t" << celsius_to_fah(i) << "\t";
		cout << "|";
		cout << j << "\t" << fahrenheit_to_cels(j) << endl;
	}
	system("pause");
		return 0;
}