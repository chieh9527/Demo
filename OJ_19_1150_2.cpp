//һ��ϸ���ķ�ֳ�ٶ���ÿ��ɱ����������磺��һ����10�����ڶ���ͱ��20������������40������������80����������
// ���ڸ�����һ������ں�ϸ����Ŀ��Ҫ��д���������ĳһ���ʱ��ϸ������Ŀ��
// Created by Chieh on 2019/3/22.
//��ĿҪ�󣺳�������long����Χ�ڣ����Կ�����ƴ���������

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n,daynum[13] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin>>n;
    for (int i = 0; i < n ; ++i){
        int first_mouth,last_mouth,first_date,last_date,num=0,sum=0;
        cin>>first_mouth>>first_date>>num>>last_mouth>>last_date;
        long int total = num;

        for (int k = first_mouth; k < last_mouth; ++k){
            sum += daynum[k];
        }
        sum += last_date - first_date;

        for (int j = 0; j < sum; ++j){
            total *= 2;
        }

        cout<<total<<endl;
    }


}