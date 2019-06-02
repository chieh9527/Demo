//
// Created by Chieh on 2019/5/16.
//

#include<iostream>
using namespace std;

int a[600];
int fun(int a,int b)
{
    int r;
    do
    {
        r=a%b;
        a=b;
        b=r;
    }while (r!=0);
    if (a==1) return 1;
    else return 0;
}

int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(fun(a[i],a[j]))	sum+=1;
            }
        }
        cout<<sum<<endl;
    }
}