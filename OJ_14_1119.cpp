//
// Created by Chieh on 2019/5/14.
//

#include <iostream>
#include <cmath>
using namespace std;

int fun(int flag, int b)
{
    int sum = 0;
//   f，i为中间变量
    int f, i = 0;
    while (flag)
    {
        f = flag % 10;
        flag /= 10;
        sum += f * (int)pow(b,i++);
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int p,q,r,b;
    for (int i = 0; i < n; ++i)
    {
        cin>>p>>q>>r;
        int p_flag = p, q_flag = q, r_flag = r;
        int a = 0;
        while (p_flag)
        {
            if (p_flag % 10 > a) a = p_flag % 10;
            p_flag /= 10;
        }
        while (q_flag)
        {
            if (q_flag % 10 > a) a = q_flag % 10;
            q_flag /= 10;
        }
        while (r_flag)
        {
            if (r_flag % 10 > a) a = r_flag % 10;
            r_flag /= 10;
        }
        for (b = a+1; b < 17; ++b) {
            p_flag = fun(p,b), q_flag = fun(q,b) ,r_flag = fun(r,b);
            if (p_flag * q_flag == r_flag) break;
        }
        if (b == 17) b=0;
        cout<<b<<endl;
    }
}