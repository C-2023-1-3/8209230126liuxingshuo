#include"student.h"
#include<iostream>
void Student::display() {
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value(int m_num,const char m_name[20],const char m_sex) {//定义赋初值函数
	num = m_num;; sex = m_sex;
	for (int i = 0; i < 20; i++) {
		name[i] = m_name[i];
	}
}