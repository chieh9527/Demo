//蛇形矩阵3
// Created by Chieh on 2019/5/17.
//提示：不能用数组，注意时间

# include <iostream>
using namespace std;
int main() {
    int n, num;
    int r, c;
    while (cin >> n >> r >> c) {
        int flag = 0;
        int counter = 1;
        //s e 分别表示是开始还是结束
        int srow = 0, erow = n - 1, scol = 0, ecol = n - 1;
        while (counter <= n * n)//判断是否生成完毕
        {
            //首行
            for (int i = scol; i <= ecol; i++) {
                if (r - 1 == srow && c - 1 == i) {
                    num = counter;
                    flag = 1;
                    break;
                }
                counter++;
            }
            srow++;
            //最右列
            for (int i = srow; i <= erow; i++) {
                if (r - 1 == i && c - 1 == ecol) {
                    num = counter;
                    flag = 1;
                    break;
                }
                counter++;
            }
            ecol--;
            //末行
            for (int i = ecol; i >= scol; i--) {
                if (r - 1 == erow && c - 1 == i) {
                    num = counter;
                    flag = 1;
                    break;
                }
                counter++;
            }
            erow--;
            //最左列
            for (int i = erow; i >= srow; i--) {
                if (r - 1 == i && c - 1 == scol) {
                    num = counter;
                    flag = 1;
                    break;
                }
                counter++;
            }
            scol++;
            if (flag) break;
        }
        //输出
        cout << num << endl;
    }

}