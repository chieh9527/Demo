//两个整数相除，它们的商也是整数，如5/3，商为1。
// （每个整数的范围在-2000000000到2000000000之间）
// Created by chieh on 2019/3/10.
//判断多组输入可以从题目（提示：有多组测试数据）
#include <stdio.h>

int main()
{
    int a,b;
    while (scanf("%d %d",&a,&b)!=EOF)
    {
        printf("%d\n",a/b);
    }
}