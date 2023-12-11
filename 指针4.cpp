#include<iostream>
using namespace std;
int* f()
{
	int*p= new int[4];
	p[0] = 1; p[1] = 2; p[2] = 3; p[3] = 4;
	return p;;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete p;
}
