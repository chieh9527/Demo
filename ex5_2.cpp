//
// Created by Chieh on 2019/5/31.
//

#include <iostream>

using namespace std;
int i = 1;//���о�̬������

void other() {
    //a��bΪ��̬�ֲ�����������ȫ���������ֲ��ɼ���ֻ�е�һ�ν��뺯���ű���ʼ����
    static int a = 2;
    static int b;
    //cΪ�ֲ�������
    int c = 10;
    a += 2;
    i += 32;
    c += 5;
    cout << "Other" << endl;
    cout << "i=" << i << "a=" << a << "c=" << c << endl;
    b = a;
}

int main() {
    //aΪ��̬�ֲ�����������ȫ���������ֲ��ɼ���ֻ�е�һ�ν��뺯���ű���ʼ����
    static int a;
    //b,cΪ�ֲ�������
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