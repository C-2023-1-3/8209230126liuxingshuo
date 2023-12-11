#include"mytemperature.h"
using namespace std;
double celsius_to_fah(double cel) {
	double fah_c;
	fah_c = 9 * cel / 5 + 32;
	return fah_c;
}
double fahrenheit_to_cels(double fah) {
	double cel_f;
	cel_f = 5 * (fah - 32) / 9;
	return cel_f;
}
