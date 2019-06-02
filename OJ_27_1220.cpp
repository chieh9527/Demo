//皇后摆放问题
// Created by Chieh on 2019/5/17.
//

#include <iostream>
#include <string.h>
using namespace std;
int ans[92][8], n, i, j, num, hang[8];

void queen(int i)
{
    int j, k;
//    储存数据
    if (i == 8){
        for (j = 0; j < 8; ++j) {
            ans[num][j] = hang[j] + 1;
        }
        num++;
        return;
    }
//    安排棋子。i代表正在安排第几个。j遍历该行
    for (int j = 0; j < 8; ++j) {
        for (k = 0; k < i; ++k)
            if (hang[k] == j || (k-i) == (hang[k]-j) || (i-k) == hang[k] - j)
                break;
        if (k==i)
        {
            hang[i] = j;
            queen(i+1);
        }
    }
}

int main()
{
    num = 0;
    queen(0);
    int a[8][8] , b[8];
    memset(b, 0 , sizeof(b));
    for (int p = 0; p < 8; ++p) {
        for (int q = 0; q < 8; ++q) {
            cin>>a[p][q];
        }
    }
    for (int p = 0; p < 8; ++p) {
        for (int q = 0; q < 8; ++q) {
            if (a[p][q]) b[p] = q + 1;
        }
    }

    int count = 0;
    for (int p = 0; p < 92; ++p) {
        for (int q = 0; q < 8; ++q) {
            if (b[q] == ans[p][q]) count++;
        }
    }
    cout<<count;
}