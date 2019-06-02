
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

//创建时间的类
class clock{
public:
    void setTime();
    void changeZone();
    void showTime();

private:
    int hour,minute,timeAll;
    string zone1,zone2;

};

//类功能的实现
void clock::setTime()
{
    string time;
    cin>>time;
    if (time == "noon") hour = 12,minute = 0;
    else if (time == "midnight") hour = 0,minute = 0;
    else
    {
//                将time再次输入，这样就不需要对字符串进行复杂的处理。
//                这个地方的time是一个类，但是输入源只能是字符数组，我们需要使用string的成员函数c_str()，返回一个指向char字符串的指针
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
//   将地点输入计算总时间
    cin>>zone1>>zone2;
    int i,j;
//         这个位置将区域一和区域二进行区域的调换,用于计算时间差
    for(i=0;zone[i]!=zone2;i++);
    for(j=0;zone[j]!=zone1;j++);
    timeAll = hour * 60 + minute + int((timeD[i]-timeD[j])*60);//其他时区的时间（单位为分钟）

    //将时间进行转换
    if (timeAll < 0)               timeAll +=1440;
    timeAll %=1440; //考虑时间不处于同一天
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