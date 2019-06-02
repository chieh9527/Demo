//已知 2007 年 10 月 10 日，请求出 n 天后是几月几号
// Created by Chieh on 2019/3/16.
//利用二阶数组保存每月的时间
//对数组角标的使用
//每次处理月份后对月份进行，判断

#include <iostream>
using namespace std;

//判断闰年
int leapyear(int year)
{
    if (year%4==0 && year%100!=0 || year%400==0)
        return 1;
    else
        return 0;
}


int main() {
    int n, year, month, date, datesum;
    int a[2][12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30,
                    31};//利用二阶数组保存每月的时间
    int leapyearFlag;
    while (cin >> n)
    {
        year = 2007;
        month = 10;
        date = 10;
        while (n)
        {
//            判断所给天数是否大于等于当前月的长度，是则月份加一
            while (n >= a[leapyear(year)][month - 1])
            {

                n -= a[leapyear(year)][month - 1];
                month += 1;
                if (month > 12)
                    year += 1, month = 1;
            }
            datesum = n + date;

//            当前号数和n，与当前月份对比
            if (datesum > a[leapyear(year)][month - 1])
            {
                date = datesum- a[leapyear(year)][month - 1],month +=1;
                if (month > 12)
                    year += 1, month = 1;
            }
            else
                date = datesum;
            printf("%d-%02d-%02d\n", year, month, date);
            n=0;
        }
    }
}
