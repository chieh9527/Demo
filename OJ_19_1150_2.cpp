//一种细菌的繁殖速度是每天成倍增长。例如：第一天有10个，第二天就变成20个，第三天变成40个，第四天变成80个，……。
// 现在给出第一天的日期和细菌数目，要你写程序求出到某一天的时候，细菌的数目。
// Created by Chieh on 2019/3/22.
//题目要求：长整数（long）范围内，所以可能设计大数的运算

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