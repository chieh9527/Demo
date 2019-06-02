//给定10个正整数,每个正整数均小于10000，将其中的奇数求和并输出
// Created by chieh on 2019/3/10.
//可以不使用多组输入
#include <stdio.h>
#define  N 10//整数的个数
int main()
{
    int a,sum=0;
    for (int i = 0; i < N; ++i)
    {
        scanf("%d",&a);
        if (a%2!=0)
            sum+=a;
    }
    printf("%d",sum);
}

//已测试

