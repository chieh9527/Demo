//һ��ϸ���ķ�ֳ�ٶ���ÿ��ɱ����������磺��һ����10�����ڶ���ͱ��20������������40������������80����������
// ���ڸ�����һ������ں�ϸ����Ŀ��Ҫ��д���������ĳһ���ʱ��ϸ������Ŀ��
// Created by Chieh on 2019/3/22.
//��ĿҪ�󣺳�������long����Χ�ڣ����Կ�����ƴ���������

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n,a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin>>n;
    for (int i = 0; i < n ; ++i)
    {
        int first_mouth,last_mouth,first_date,last_date,num,first=0,last=0;
        cin>>first_mouth>>first_date>>num>>last_mouth>>last_date;
        long int total = num;

        for (int j = 0; j < first_mouth-1; ++j)
        {
            first +=a[j];
        }
        first +=first_date;

        for (int j = 0; j < last_mouth-1; ++j)
        {
            last +=a[j];
        }
        last += last_date;

        for (int j = 0; j < last-first; ++j)
        {
            total *= 2;
        }
        cout<<total<<endl;
    }


}