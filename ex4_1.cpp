//
// Created by Chieh on 2019/5/29.
//����ʱ�����

#include <iostream>
using namespace std;

//����ʱ����
class Clock{
public:
    Clock(int newH, int newM, int newS);//���캯�����ڶ�������ʱ��Ϳ��Ը�����ֵ��
    void setTime(int newH = 0, int newM = 0, int newS=0);//����ʱ�亯�������Բ������������ôĬ��Ϊ0��0��0.Ҳ��������
    void showTime();//չʾʱ�亯��
    ~Clock(){}

private:
    int hour;
    int minute;
    int second;
};

//���캯��
Clock::Clock(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

//ʵ������ʱ��
void Clock::setTime(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

//ʵ��ʱ���չʾ
void Clock::showTime() {
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}



int main()
{
    Clock myClock(4, 30, 30);  //�������
    myClock.showTime();
    cout<<"First time set and output:"<<endl;
    myClock.setTime();  //��������������ʱ�䣩
    myClock.showTime();
    cout<<"Second time set and output:"<<endl;
    myClock.setTime(8,30,30);//������������ʱ�䣩
    myClock.showTime();
    return 0;
}