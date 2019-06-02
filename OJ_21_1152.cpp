
//
// Created by Chieh on 2019/4/12.
//

#include <iostream>
#include <cstring>
using namespace std;

string zone[32] ={"UTC","GMT","BST","IST","WET","WEST","CET","CEST",
                  "EET","EEST","MSK","MSD","AST","ADT","NST","NDT",
                  "EST","EDT","CST","CDT","MST","MDT","PST","PDT",
                  "HST","AKST","AKDT","AEST","AEDT","ACST","ACDT","AWST"};
float timeD[32]={0,0,1,1,0,1,1,2,2,3,3,4,-4,-3,-3.5,-2.5,-5,-4,-6,-5,-7,-6,-8,-7,-10,-9,-8,10,11,9.5,10.5,8};

//����ʱ�����
class clock{
public:
    void setTime();
    void changeZone();
    void showTime();

private:
    int hour,minute,timeAll;
    string zone1,zone2;

};

//�๦�ܵ�ʵ��
void clock::setTime()
{
    string time;
    cin>>time;
    if (time == "noon") hour = 12,minute = 0;
    else if (time == "midnight") hour = 0,minute = 0;
    else
    {
//                ��time�ٴ����룬�����Ͳ���Ҫ���ַ������и��ӵĴ���
//                ����ط���time��һ���࣬��������Դֻ�����ַ����飬������Ҫʹ��string�ĳ�Ա����c_str()������һ��ָ��char�ַ�����ָ��
        sscanf(time.c_str(), "%d:%d", &hour, &minute);
        hour %= 12;
        cin >> time;
        if (time.c_str()[0] == 'p') hour += 12;
    }

}
void clock::showTime() {
    if (timeAll == 0)            cout<<"midnight"<<endl;
    else if (timeAll == 720)     cout<<"noon"<<endl;
    else
    {
        hour = timeAll/60;
        minute = timeAll%60;
        if ( hour == 0 )
            printf("12:%d a.m.\n",minute);
        else if ( hour < 12 )
            printf("%d:%d a.m.\n",hour,minute);
        else if( hour == 12 )
            printf("12:%d p.m.\n",minute);
        else
            printf("%d:%d p.m.\n",hour%12,minute);
    }
}

void clock::changeZone()
{
//   ���ص����������ʱ��
    cin>>zone1>>zone2;
    int i,j;
//         ���λ�ý�����һ���������������ĵ���,���ڼ���ʱ���
    for(i=0;zone[i]!=zone2;i++);
    for(j=0;zone[j]!=zone1;j++);
    timeAll = hour * 60 + minute + int((timeD[i]-timeD[j])*60);//����ʱ����ʱ�䣨��λΪ���ӣ�

    //��ʱ�����ת��
    if (timeAll < 0)               timeAll +=1440;
    timeAll %=1440; //����ʱ�䲻����ͬһ��
}
int main()
{
    class clock myTime;
    class clock newTime;
    int n;
    cin>>n;
    for (int k = 0; k < n; ++k)
    {
        myTime.setTime();
        myTime.changeZone();
        newTime = myTime;
        myTime.showTime();
    }
}