//��֪ 2007 �� 10 �� 10 �գ������ n ����Ǽ��¼���
// Created by Chieh on 2019/3/16.
//���ö������鱣��ÿ�µ�ʱ��
//������Ǳ��ʹ��
//ÿ�δ����·ݺ���·ݽ��У��ж�

#include <iostream>
using namespace std;

//�ж�����
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
                    31};//���ö������鱣��ÿ�µ�ʱ��
    int leapyearFlag;
    while (cin >> n)
    {
        year = 2007;
        month = 10;
        date = 10;
        while (n)
        {
//            �ж����������Ƿ���ڵ��ڵ�ǰ�µĳ��ȣ������·ݼ�һ
            while (n >= a[leapyear(year)][month - 1])
            {

                n -= a[leapyear(year)][month - 1];
                month += 1;
                if (month > 12)
                    year += 1, month = 1;
            }
            datesum = n + date;

//            ��ǰ������n���뵱ǰ�·ݶԱ�
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
