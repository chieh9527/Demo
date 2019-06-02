//
// Created by Chieh on 2019/5/10.
//
#include <iostream>
using namespace std;

long int fun(long int n )
{
    if ( n == 1 ) return 1;
    else if ( n == 2 ) return 2;
    else return fun(n-1) + fun(n-2);
}
int main()
{
    long int n;
    while (cin>>n)
    {
        cout<<fun(n)<<endl;
    }
}