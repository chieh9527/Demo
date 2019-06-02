//
// Created by Chieh on 2019/6/1.
//

#include <iostream>
#include <cmath>

using namespace std;

class Point {//点类的定义
public:
//    Point(int xx=0, int yy=0){//内敛构造函数
//        x = xx;
//        y = yy;
//        count++;
//    }
    Point(int x = 0, int y = 0) : x(x), y(y) {//构造函数
        count++;
    }

    ~Point() { count--; }

    Point(Point &p);//复制构造函数(主要用于类之间使用等号传值)
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

//复制构造函数的实现
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


int Point::count;//静态数据成员的定义以及初始化

int main() {
    Point a(4, 5);
    Point::showCount();
    Point b(1, 1);
    Point::showCount();
    cout << dist(a, b) << endl;
    return 0;
}