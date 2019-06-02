//
// Created by Chieh on 2019/6/1.
//

#include <iostream>
#include <cmath>

using namespace std;

class Point {//����Ķ���
public:
//    Point(int xx=0, int yy=0){//�������캯��
//        x = xx;
//        y = yy;
//        count++;
//    }
    Point(int x = 0, int y = 0) : x(x), y(y) {//���캯��
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

    friend float dist(Point &p1, Point &p2);

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

float dist(Point &p1, Point &p2) {
    double x = p1.x - p2.x;
    double y = p1.y - p2.y;
    return static_cast<int>(sqrt(x * x + y * y));
    return 0;
}


int Point::count;//��̬���ݳ�Ա�Ķ����Լ���ʼ��

int main() {
    Point a(4, 5);
    Point::showCount();
    Point b(1, 1);
    Point::showCount();
    cout << dist(a, b) << endl;
    return 0;
}