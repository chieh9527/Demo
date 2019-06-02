//
// Created by Chieh on 2019/4/12.
//

#include <iostream>
#include <cstring>
using namespace std;

#define cityNum 32
string zone[cityNum] ={"UTC","GMT","BST","IST","WET","WEST","CET","CEST",
                       "EET","EEST","MSK","MSD","AST","ADT","NST","NDT",
                       "EST","EDT","CST","CDT","MST","MDT","PST","PDT",
                       "HST","AKST","AKDT","AEST","AEDT","ACST","ACDT","AWST"};
float timeDe[cityNum]={0,0,1,1,0,1,1,2,2,3,3,4,-4,-3,-3.5,-2.5,-5,-4,-6,-5,-7,-6,-8,-7,-10,-9,-8,10,11,9.5,10.5,8};

int main()
{
    int n,i,j;
    cin>>n;
    for (int k = 0; k < n; ++k) {
        string noon = "noon",pm = "p.m.",midnight = "midnight";
        string time;
        int hours,minutes;
//        将输入的时间和地点用类进行保存。
        cin>>time;
//        对输入的内容进行分析以及判断
        if (time == noon) hours = 12,minutes = 0;
        else if (time == midnight) hours = 0,minutes = 0;
        else
            {
//                将time再次输入，这样就不需要对字符串进行复杂的处理。
//                这个地方的time是一个类，但是输入源只能是字符数组，我们需要使用string的成员函数c_str()，返回一个指向char字符串的指针
                sscanf(time.c_str(),"%d:%d",&hours,&minutes);
                hours %=12;
                cin>>time;
                if (time == pm) hours +=12;
            }

//        将字符串进行对比，然后就可以确定时区。
        string timezone1,timezone2;
        cin>>timezone1>>timezone2;
        int time_Other;
//         这个位置将区域一和区域二进行区域的调换,用于计算时间差
        for(i=0;zone[i]!=timezone2;i++);
        for(j=0;zone[j]!=timezone1;j++);
        time_Other = hours * 60 + minutes + int((timeDe[i]-timeDe[j])*60);//其他时区的时间（单位为分钟）

//将时间进行输出
        if (time_Other < 0)               time_Other +=1440;
        time_Other %=1440; //考虑时间不处于同一天

        if (time_Other == 0)            cout<<midnight<<endl;
        else if (time_Other == 720)     cout<<noon<<endl;
        else
            {
                hours = time_Other/60;
                minutes = time_Other%60;
                if ( hours == 0 )
                    printf("12:%d a.m.\n",minutes);
                else if ( hours < 12 )
                    printf("%d:%d a.m.\n",hours,minutes);
                else if( hours == 12 )
                    printf("12:%d p.m.\n",minutes);
                else
                    printf("%d:%d p.m.\n",hours%12,minutes);
            }
    }
}