//
// Created by Chieh on 2019/5/10.
//

#include<iostream>
using namespace std;

int a[250] = {0}, b[250] = {0}, c[250] = {0};

int main()
{
    int i;
    string str1,str2;
    while (cin >> str1>>str2)
    {
//  各个字符串的长度
        a[0] = str1.length();
        b[0] = str2.length();
        c[0] = max(a[0], b[0]);
//    将数字从字符串中提取
        for (i = 1; i <= a[0]; i++)
            a[i] = str1[a[0] - i] - '0';
        for (i = 1; i <= b[0]; i++)
            b[i] = str2[b[0] - i] - '0';
//    计算，但是暂时不进位
        for (int i = 1; i <= c[0]; i++)
            c[i] = a[i] + b[i];
//     整理计算结果。（进位，寻找位数）
        for (int i = 1; i <= c[0]; i++) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
        if (c[c[0] + 1] > 0) c[0]++;//注意考虑最后一位

        if (c[c[0]] == 0) {
            cout << 0 << endl;

        }
        else{
            for (int i = c[0]; i > 0; i--)
                cout << c[i];
            cout<<endl;
        }


    }
}