#include<iostream>
using namespace std;
class Student { //定义学生类
	friend void max(Student *p);
private: //学生属性设置为私有
	int id;
	int score;
public:
	void setid(int m_id) { id = m_id; } //传递参数为属性赋值
	void setscore(int m_score) { score = m_score; }
	void showid() { cout << "成绩最高者学号：" << id << endl; } //冒泡排序后对象数组中的最后一项即为最高分
	void showscore() { cout<<"成绩最高者分数："<<score; }
};
void max(Student *p) { //指向对象的指针作参数
		for (int i = 5; i > 1; i--) { //冒泡排序
			for (int j = 0; j < i - 1; j++) {
				if (p[j].score > p[j + 1].score) {
					Student mid;
					mid = p[j];
					p[j] = p[j + 1];
					p[j + 1] = mid;
				}
			}
		}
	}
int main() {
	Student*p=new Student[5];//开辟堆区空间将对象储存在数组中
	p[0].setid(123); //成员函数赋初值
	p[0].setscore(80);
	p[1].setid(234);
	p[1].setscore(70);
	p[2].setid(345);
	p[2].setscore(90);
	p[3].setid(456);
	p[3].setscore(20);
	p[4].setid(567);
	p[4].setscore(50);
	max(p);//排序，将最高分移动到p[4]
	p[4].showid();//显示最高分信息
	p[4].showscore();
	delete p;//释放堆区空间
	return 0;
}