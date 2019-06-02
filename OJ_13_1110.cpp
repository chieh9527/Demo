//
// Created by Chieh on 2019/5/10.
//

#include<stdio.h>

int main()
{
    int N,k,k1,k2;
    int i,j;
    while(scanf("%d %d",&N,&k)!=EOF)
    {//printf("2");
        int sum=0;
        int a[N+1];
        for(i=0;i<=N;i++)
        {
            a[i]=1;
        }
        //printf("1");
        for(i=0;i<k;i++)
        {
            scanf("%d %d",&k1,&k2);
            for(j=k1-1;j<=k2-1;j++)
                a[j]=0;
        }
        for(i=0;i<=N;i++)
        {
            if(a[i])
                sum+=1;
        }
        printf("%d\n",sum);
    }
}