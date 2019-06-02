//
// Created by Chieh on 2019/5/21.
//书上有例题

#include <iostream>
using namespace std;

int a[3000];

int main()
{
    int n, m;
    while (cin>>n>>m){
        int p = 0;
        if (n == 0) break;
        for (int i = 0; i < n; ++i) {
            a[i] = i+1;
        }
        for (int i = 0; i < n; ++i) {
            int count = 0;
            while (count<m){
                while (a[p] == 0){
                    p = (p+1)%n;
                }
                count++;
                p = (p+1)%n;
            }
            p--;
            if (p < 0) p = n-1;
            if (i == n-1) cout<<a[p]<<endl;
            else cout<<a[p]<<" ";
            a[p] = 0;
        }
    }
}