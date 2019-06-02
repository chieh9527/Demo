//
// Created by Chieh on 2019/5/25.
//不可以使用数组进行储存。时间比较短，而且如果使用第三个循环，会超时

#include <iostream>
using namespace std;

bool check(int number)
{
    while(number)
    {
        int t = number % 10;
        if(t == 2 || t == 4)
            return false;
        number /= 10;
    }
    return true;
}

int main()
{
    int n;
    while(cin >> n)
    {
        int ans = 0;
        for(int a = 1; a < n; a++)
        {
            for(int b = a + 1; b < n && b < n - a - b; b++)
            {
                int c = n - a - b;
                if(check(a) && check(b) && check(c))
                    ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}