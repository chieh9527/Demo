//��֪һ���������е����£�1/2,3/5,4/7,6/10,8/13,9/15,.....����������еĵ�n������Ӧ���ֵ���÷�����ʾ��
// Created by Chieh on 2019/4/7.
//ע������
//���ɣ����ӷ�ĸ���Ϊn������Ϊǰ��û�г��ֹ�������

#include <iostream>
using namespace std;
bool a[10001];

int main()
{
    int num;
    while (cin>>num){
        //    ��ʼ������
        for (int k = 0; k < 10000; ++k) {
            a[k] = true;
        }
        int k1, k2;
//        ������㣬ֱ��ָ��������
        for (int i = 1; i <= num; ++i)
        {
//            ����������k1��
            for (int j = 1; j < 10000; ++j) {
                if (a[j])
                {
                    k1 = j;
                    break;
                }

            }
//          ����ʹ�ù�������,�������б��,�ù����Ϊ1��û�ù�Ϊ0
            k2 = k1 + i;
            a[k1] = false;
            a[k2] = false;
        }
        cout<<k1<<"/"<<k2<<endl;
    }
}

