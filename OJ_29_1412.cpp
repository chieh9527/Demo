//���ξ���3
// Created by Chieh on 2019/5/17.
//��ʾ�����������飬ע��ʱ��

# include <iostream>
using namespace std;
int main() {
    int n, num;
    int r, c;
    while (cin >> n >> r >> c) {
        int flag = 0;
        int counter = 1;
        //s e �ֱ��ʾ�ǿ�ʼ���ǽ���
        int srow = 0, erow = n - 1, scol = 0, ecol = n - 1;
        while (counter <= n * n)//�ж��Ƿ��������
        {
            //����
            for (int i = scol; i <= ecol; i++) {
                if (r - 1 == srow && c - 1 == i) {
                    num = counter;
                    flag = 1;
                    break;
                }
                counter++;
            }
            srow++;
            //������
            for (int i = srow; i <= erow; i++) {
                if (r - 1 == i && c - 1 == ecol) {
                    num = counter;
                    flag = 1;
                    break;
                }
                counter++;
            }
            ecol--;
            //ĩ��
            for (int i = ecol; i >= scol; i--) {
                if (r - 1 == erow && c - 1 == i) {
                    num = counter;
                    flag = 1;
                    break;
                }
                counter++;
            }
            erow--;
            //������
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
        //���
        cout << num << endl;
    }

}