
// Created by Chieh on 2019/5/9.
//
/*
数塔问题：
9
12 15
10 6 8
2 18 9 5
19 7 10 4 16
有形如图所示的数塔，从顶部出发，在每一结点可以选择向左走或是向右走，
一直走到底层，要求找出一条路径，使路径上的值最大。
这道题如果用枚举法，在数塔层数稍大的情况下（如40），则需要列举出的路径条数将是一个非常庞大的数目。
如果用贪心法又往往得不到最优解。
在用动态规划考虑数塔问题时可以自顶向下的分析，自底向上的计算。
从顶点出发时到底向左走还是向右走应取决于是从左走能取到最大值还是从右走能取到最大值，
只要左右两道路径上的最大值求出来了才能作出决策。
*/
/*同样的道理下一层的走向又要取决于再下一层上的最大值是否已经求出才能决策。+
这样一层一层推下去，直到倒数第二层时就非常明了。
如数字2，只要选择它下面较大值的结点19前进就可以了。
所以实际求解时，可从底层开始，层层递进，最后得到最大值。
总结：此题是最为基础的动态规划题目，阶段、状态的划分一目了然。
      而决策的记录，充分体现了动态规划即“记忆化搜索”的本质。
*/

#include <iostream>
using namespace std;

const int N = 1001;
int a[N][N];//存储数塔原始数据
int main()
{
    int n;
    cin >> n;
    //输入数塔
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= i; ++j)		//第i行有i个数
        {
            cin >> a[i][j];
        }
    }
    //计算
    for(int i = n-1; i >= 1; --i)	//从倒数第二行开始
    {
        for(int j=1; j <= i; j++)
        {
            if (a[i+1][j] < a[i+1][j+1])	//左边大
            {
                a[i][j] += a[i+1][j];
            }
            else	//右边大
            {
                a[i][j] += a[i+1][j+1];
            }
        }
    }
    //输出最大值
    cout <<a[1][1]<< endl;
    return 0;
}