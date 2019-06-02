//
// Created by Chieh on 2019/5/8.
//

#include <iostream>
using namespace std;

int main()
{
    int i,k;
    for(i=1;i<=20;i++)
    {
        cin>>k;
        if(k<=0)
        {
            printf("%d\n",abs(k));
        }
        else if(k>0)
            printf("-%d\n",k);
    }
    return 0;
}