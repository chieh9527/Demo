//
// Created by Chieh on 2019/5/31.
//

#include <iostream>

using namespace std;
int i = 1;//具有静态生存期

void other() {
    //a，b为静态局部变量，具有全局寿命，局部可见，只有第一次进入函数才被初始化。
    static int a = 2;
    static int b;
    //c为局部变量。
    int c = 10;
    a += 2;
    i += 32;
    c += 5;
    cout << "Other" << endl;
    cout << "i=" << i << "a=" << a << "c=" << c << endl;
    b = a;
}

int main() {
    //a为静态局部变量，具有全局寿命，局部可见，只有第一次进入函数才被初始化。
    static int a;
    //b,c为局部变量。
    int b = -10;
    int c = 0;
    cout << "main" << endl;
    cout << "i=" << i << "a=" << a << "b=" << b << "c=" << c << endl;
    c += 8;
    other();
    cout << "main" << endl;
    cout << "i=" << i << "a=" << a << "b=" << b << "c=" << c << endl;
    i += 10;
    other();
}