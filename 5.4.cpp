#include<iostream>
using namespace std;
class Student { //����ѧ����
	friend void max(Student *p);
private: //ѧ����������Ϊ˽��
	int id;
	int score;
public:
	void setid(int m_id) { id = m_id; } //���ݲ���Ϊ���Ը�ֵ
	void setscore(int m_score) { score = m_score; }
	void showid() { cout << "�ɼ������ѧ�ţ�" << id << endl; } //ð���������������е����һ�Ϊ��߷�
	void showscore() { cout<<"�ɼ�����߷�����"<<score; }
};
void max(Student *p) { //ָ������ָ��������
		for (int i = 5; i > 1; i--) { //ð������
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
	Student*p=new Student[5];//���ٶ����ռ佫���󴢴���������
	p[0].setid(123); //��Ա��������ֵ
	p[0].setscore(80);
	p[1].setid(234);
	p[1].setscore(70);
	p[2].setid(345);
	p[2].setscore(90);
	p[3].setid(456);
	p[3].setscore(20);
	p[4].setid(567);
	p[4].setscore(50);
	max(p);//���򣬽���߷��ƶ���p[4]
	p[4].showid();//��ʾ��߷���Ϣ
	p[4].showscore();
	delete p;//�ͷŶ����ռ�
	return 0;
}