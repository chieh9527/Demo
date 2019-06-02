//已知一个分数数列的如下：1/2,3/5,4/7,6/10,8/13,9/15,.....。输入该数列的第n项，输出对应项的值（用分数表示）
// Created by Chieh on 2019/4/7.
//注意事项
//规律：分子分母相差为n，分子为前面没有出现过的数字

#include <iostream>
using namespace std;
bool a[10001];

int main()
{
    int num;
    while (cin>>num){
        //    初始化数组
        for (int k = 0; k < 10000; ++k) {
            a[k] = true;
        }
        int k1, k2;
//        逐个计算，直到指定的项数
        for (int i = 1; i <= num; ++i)
        {
//            遍历数组找k1；
            for (int j = 1; j < 10000; ++j) {
                if (a[j])
                {
                    k1 = j;
                    break;
                }

            }
//          储存使用过的数字,在数组中标记,用过标记为1，没用过为0
            k2 = k1 + i;
            a[k1] = false;
            a[k2] = false;
        }
        cout<<k1<<"/"<<k2<<endl;
    }
}

