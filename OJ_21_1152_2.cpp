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
//        �������ʱ��͵ص�������б��档
        cin>>time;
//        ����������ݽ��з����Լ��ж�
        if (time == noon) hours = 12,minutes = 0;
        else if (time == midnight) hours = 0,minutes = 0;
        else
            {
//                ��time�ٴ����룬�����Ͳ���Ҫ���ַ������и��ӵĴ���
//                ����ط���time��һ���࣬��������Դֻ�����ַ����飬������Ҫʹ��string�ĳ�Ա����c_str()������һ��ָ��char�ַ�����ָ��
                sscanf(time.c_str(),"%d:%d",&hours,&minutes);
                hours %=12;
                cin>>time;
                if (time == pm) hours +=12;
            }

//        ���ַ������жԱȣ�Ȼ��Ϳ���ȷ��ʱ����
        string timezone1,timezone2;
        cin>>timezone1>>timezone2;
        int time_Other;
//         ���λ�ý�����һ���������������ĵ���,���ڼ���ʱ���
        for(i=0;zone[i]!=timezone2;i++);
        for(j=0;zone[j]!=timezone1;j++);
        time_Other = hours * 60 + minutes + int((timeDe[i]-timeDe[j])*60);//����ʱ����ʱ�䣨��λΪ���ӣ�

//��ʱ��������
        if (time_Other < 0)               time_Other +=1440;
        time_Other %=1440; //����ʱ�䲻����ͬһ��

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