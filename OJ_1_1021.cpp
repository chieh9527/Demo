//求解n天后得星期数
// Created by chieh on 2019/3/10.
//有一个点要注意，当输入为0时(很久没有打代码，导致忘记加取地址的符号)
#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,a;//a表示星期
    while (scanf("%d",&n)!=EOF)
    {

        a=n%7;
        if (a==0)
            a=7;
        printf("%d\n",a);
    }
    

}
//已测试