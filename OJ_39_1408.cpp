//
// Created by Chieh on 2019/4/18.
//

#include <iostream>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        long long int i,s1=0,s2=0;
        for(i=1;i<=min(n,m);i++)
            s1+=(m-i+1)*(n-i+1);
        for (int j = 0; j <= n; ++j) {
            for (int k = 0; k <= m; ++k) {
                if (k==j) continue;
                s2 +=(m - k)*(n - j);
            }
        }
        cout<<s1<<" "<<s2<<endl;
    }
}

