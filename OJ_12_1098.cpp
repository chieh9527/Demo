//
// Created by Chieh on 2019/5/10.
//


#include <iostream>
using namespace std;
int main()
{
    int num;
    while (cin>>num)
    {
        for(int i=2;i<=num;)
        {
            if(num%i==0)
            {
                cout<<i;
                num/=i;
                if (num!=1) cout<<" ";
            }
            else i++;
        }
        cout<<endl;
    }
    return 0;
}