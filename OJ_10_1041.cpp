//
// Created by Chieh on 2019/5/9.
//
#include <iostream>
using namespace std;

int main()
{
    int n[20], num;
    for (int i = 0; i < 20; ++i) {
        cin>>n[i];
    }
    for (int i = 0; i < 20; ++i) {
        for (int j = i+1; j < 20; ++j) {
            if (n[j]<n[i])
            {
                num = n[j];
                n[j] = n[i];
                n[i] = num;
            }
        }
    }
    for (int i = 0; i < 20; ++i) {
        cout<<n[i]<<endl;
    }
    return 0;
}