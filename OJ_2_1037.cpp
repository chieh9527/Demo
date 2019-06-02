//求出 n 个整数的和。
// Created by chieh on 2019/3/10.
//使用一个数字来先保存同时处理，这个思考方法可以用于字符串
#include <stdio.h>

int main()
{
    int n,a,sum=0;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d",sum);
    systeam('')
}

//已测试