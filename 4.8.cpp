#include<iostream>
#include<string>
using namespace std;
int parseHex(const char* const hexString)
{
	cout << stoi(hexString, 0, 16) << endl;
	return true;
}
int main() {
	parseHex("A5");
	return 0;
}