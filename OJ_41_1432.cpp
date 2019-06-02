//
// Created by Chieh on 2019/5/21.
//

#include <iostream>
#include <iomanip>
using namespace std;
double a[100];

int main()
{
    int n, p;

    while (cin>>n){
        double max = 0;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
//        排序
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (a[i] < a[j]){
                    p = a[i];
                    a[i] = a[j];
                    a[j] = p;
                }
            }
        }
//        计算出所有三角形的面积，取最大值
        for (int i = 0; i < n-2; ++i) {
            for (int j = i+1; j < n-1; ++j) {
                for (int k = i+2; k < n; ++k) {
                    if (a[i] * a[i] == a[j] * a[j] + a[k] * a[k] && max < a[j] * a[k] / 2.0)
                        max = a[j] * a[k] / 2.0;
                }
            }
        }
        if (max == 0) cout<<"No"<<endl;
        else cout<<setiosflags(ios::fixed)<<setprecision(3)<<max<<endl;
    }
}