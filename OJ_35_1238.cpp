//
// Created by Chieh on 2019/5/17.
//

#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i,m,j,k,sum=0;
        for(i=1;i<=n;i++)
        {
            int max=0;
            scanf("%d",&m);
            for(j=1;j<=m;j++)
            {

                scanf("%d",&k);
                if(k>max)
                    max=k;
            }

            sum+=max;

        }
        printf("%d\n",sum);
    }

}