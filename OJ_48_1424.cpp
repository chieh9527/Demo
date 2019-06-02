//幂积序列
// Created by Chieh on 2019/5/31.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int a[500];

int main() {
    int n, m;
    while (cin >> n >>m) {
        int i=0, j=0, p=0;
        int f,sum = 0;
        while(true){
            f = static_cast<int>(pow(2, i) * pow(3, j));
            i++;
            if (f>n) {j++;i = 0;} else {a[sum] = f;sum++;}
            if (pow(3,j)>n) break;
        }
        sort(a,a+sum);//对数组排序
        cout<<sum<<endl;
        cout<<a[m-1]<<endl;
    }
}