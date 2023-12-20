#pragma once
#include<iostream>
using namespace std;
class Student              //类声明
{
public:                 
	void display();
	void set_value(int m_num,const char m_name[20],const char sex);//声明赋初值函数
private:
	int num;
	char name[20];
	char sex;
};
