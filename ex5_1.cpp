//
// Created by Chieh on 2019/5/31.
//

#include <iostream>

using namespace std;

int i;//����ȫ�ֱ���

namespace Ns {//����һ��Ns�����ռ�
    int j = 6;
}

int main() {
    int i = 5;
    {
        int i;//�ֲ�������
        i = 7;
        cout << "i=" << i << endl;
        cout << "j=" << Ns::j << endl;
    }

    cout << "i=" << i;
    return 0;
}