//Haab��ת����Tzolkin��
// Created by Chieh on 2019/4/12.
//�״�㣺��������Ŀ�ʼ�ı�ʾ����ͬ


#include <iostream>
#include <cstring>
using namespace std;

#define namelong 10//���ַ����ĳ��ȶ�Ϊ10.
int main()
{
    char haab_month[19][namelong] = {"pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};
    char tzolkin_date[20][namelong] = {"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac,","ahau"};
    int n,j;
    int haab_date,haab_year,total;

    char month[namelong];
    scanf("%d",&n);

    for (int i = 0; i < n; ++i) {
        scanf("%d %s %d",&haab_date,month,&haab_year);
        for (j = 0; j < 19; ++j) {
            if(!strcmp(haab_month[j],month)) break;
        }
        total = haab_date + j * 20 + haab_year * 365;
        printf("%d %s %d\n",(total+1)%13,tzolkin_date[total%20],total/260);//��һ�������Ǵ�0��ʼ�ģ����Զ�Ӧ����Ӧ�ü�һ
    }

}
