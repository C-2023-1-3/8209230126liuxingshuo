#pragma once
#include<iostream>
using namespace std;
class Student              //������
{
public:                 
	void display();
	void set_value(int m_num,const char m_name[20],const char sex);//��������ֵ����
private:
	int num;
	char name[20];
	char sex;
};
