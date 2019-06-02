//
// Created by Chieh on 2019/5/29.
//定义时间对象

#include <iostream>
using namespace std;

//创建时钟类
class Clock{
public:
    Clock(int newH, int newM, int newS);//构造函数（在定义对象的时候就可以给对象赋值）
    void setTime(int newH = 0, int newM = 0, int newS=0);//设置时间函数。可以不输入参数，那么默认为0，0，0.也可以输入
    void showTime();//展示时间函数
    ~Clock(){}

private:
    int hour;
    int minute;
    int second;
};

//构造函数
Clock::Clock(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

//实现设置时间
void Clock::setTime(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

//实现时间的展示
void Clock::showTime() {
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}



int main()
{
    Clock myClock(4, 30, 30);  //定义对象
    myClock.showTime();
    cout<<"First time set and output:"<<endl;
    myClock.setTime();  //不带参数（设置时间）
    myClock.showTime();
    cout<<"Second time set and output:"<<endl;
    myClock.setTime(8,30,30);//带参数（设置时间）
    myClock.showTime();
    return 0;
}