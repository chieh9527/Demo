//
// Created by Chieh on 2019/5/25.
//

#include <iostream>
using namespace std;
#define N 10

int main()
{
    int n;
    while (cin>>n){
        long long int a[5][N][N], sum[N][N];
//        最初的矩阵
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin>>a[0][i][j];
            }
        }
//        旋转90度后
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                a[1][i][j] = a[0][n-j-1][i];
            }
        }
//        旋转180度
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                a[2][i][j] = a[0][n-i-1][n-j-1];
            }
        }
//        旋转270度
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                a[3][i][j] = a[0][j][n-i-1];
            }
        }


        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                a[4][i][j] = a[0][i][j] + a[1][i][j] + a[2][i][j] + a[3][i][j];
            }
        }
        long long int k;
        cin>>k;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (k%4 == 3)   sum[i][j] = a[4][i][j]*((k/4)+1);
                if (k%4 == 0)   sum[i][j] = a[4][i][j]*(k/4) + a[0][i][j];
                if (k%4 == 1)   sum[i][j] = a[4][i][j]*(k/4) + a[0][i][j] + a[1][i][j];
                if (k%4 == 2)   sum[i][j] = a[4][i][j]*(k/4) + a[0][i][j] + a[1][i][j] + a[2][i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout<<sum[i][j];
                if (j<n-1) cout<<" ";
            }
            cout<<endl;
        }

    }
}
//        测试数据：1 2 3 2 3 4 3 4 5