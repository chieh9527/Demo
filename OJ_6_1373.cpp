//给定一行表达式，中间有数字和加减法，然后计算出计算结果
// Created by chieh on 2019/3/10.
//利用一个字符，读取和处理字符串
//while的条件（满足的情况循环）
//字符中的数字表示int(c-'0')
//对于逐个处理的方法，添加一个多组输入特别难，但是可以通过构建函数来实现EOF

#include <stdio.h>
int Fun()
{
    char c,a='+';
    int num=0,result=0;
    do
    {
        c=getchar();
        if (c>='0'&&c<='9')
        {num=num*10+int(c-'0');}//int(c-'0'),数字字符所对应的数字
        else
        {
            printf("%d\n",num);
            if (a=='+')
            {
                result+=num;
            }
            if (a=='-')
            {
                result-=num;
            }
            if (a==EOF)
            {
                return 0;
            }
            a=c;//将符号保存，与参与下一个数的计算
            num=0;//初始化
        }
    }while (a!='\n');
    printf("%d\n",result);
    return 1;
}

int main()
{
    while (Fun());
    return 0;
}




