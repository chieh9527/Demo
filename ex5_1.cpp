//
// Created by Chieh on 2019/5/31.
//

#include <iostream>

using namespace std;

int i;//定义全局变量

namespace Ns {//定义一个Ns命名空间
    int j = 6;
}

int main() {
    int i = 5;
    {
        int i;//局部作用域
        i = 7;
        cout << "i=" << i << endl;
        cout << "j=" << Ns::j << endl;
    }

    cout << "i=" << i;
    return 0;
}