#include<iostream>
using namespace std;
class Time             // ����Time��
{
public:
	void settime() {//�趨ʱ��
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void showtime() {//��ʾʱ��
		cout << "time=" << hour << ":" << minute << ":" << sec << endl;//���ʱ��
	}
private:            // ���ݳ�ԱΪ˽�е�
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.settime();
	t1.showtime();
	return 0;
}
