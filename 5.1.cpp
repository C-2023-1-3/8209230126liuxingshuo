#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:
	void settime() {//设定时间
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void showtime() {//显示时间
		cout << "time=" << hour << ":" << minute << ":" << sec << endl;//输出时间
	}
private:            // 数据成员为私有的
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.settime();
	t1.showtime();
	return 0;
}
