//
// Created by Chieh on 2019/5/21.
//可能sum需要long long int

#include <iostream>
using namespace std;
int a[800],b[800];


int main()
{
    int n;
    int p;
    while (cin>>n){
        long long int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin>>b[i];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (a[i] > a[j]){
                    p = a[i];
                    a[i] = a[j];
                    a[j] = p;
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (b[i] > b[j]){
                    p = b[i];
                    b[i] = b[j];
                    b[j] = p;
                }
            }
        }
        for (int i = 0, j = n-1; i < n; ++i, j--) {
            sum += a[i] * b[j];
        }
        cout<<sum<<endl;
    }
}