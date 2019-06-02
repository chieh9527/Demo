//5_4��5_5����ʵ������
// Created by Chieh on 2019/5/29.
//��̬���ݳ�Ա�;�̬������Ա��ͨ������ֱ�ӷ��ʣ�

#include <iostream>

using namespace std;

class Point {//����Ķ���
public:
//    Point(int xx=0, int yy=0){//�������캯��
//        x = xx;
//        y = yy;
//        count++;
//    }
    Point(int x = 0,int y= 0) : x(x), y(y) {
        count++;
    }

    ~Point() { count--; }

    Point(Point &p);//���ƹ��캯��(��Ҫ������֮��ʹ�õȺŴ�ֵ)
    int getX() {
        return x;
    };

    int getY() {
        return y;
    };

    static void showCount() {
        cout << count << endl;
    };

private:
    int x, y{};
    static int count;
};

//���ƹ��캯����ʵ��
Point::Point(Point &p) {
    x = p.x;
    y = p.y;
    count++;
}

//�β�ΪPoint��ĺ���(�õ����x����)
void fun1(Point p) {
    cout << p.getX() << endl;
}

//�β�ΪPoint��ĺ���������һ������
Point fun2() {
    Point a(1, 2);
    return a;
}

int Point::count;//��̬���ݳ�Ա�Ķ����Լ���ʼ��

int main() {
    Point a(4, 5);
    Point::showCount();

    Point b = a;
    Point::showCount();
    a.getX();
    return 0;
}
