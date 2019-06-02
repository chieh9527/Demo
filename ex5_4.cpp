//5_4和5_5两个实例程序
// Created by Chieh on 2019/5/29.
//静态数据成员和静态函数成员（通过类名直接访问）

#include <iostream>

using namespace std;

class Point {//点类的定义
public:
//    Point(int xx=0, int yy=0){//内敛构造函数
//        x = xx;
//        y = yy;
//        count++;
//    }
    Point(int x = 0,int y= 0) : x(x), y(y) {
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

//形参为Point类的函数(得到点的x坐标)
void fun1(Point p) {
    cout << p.getX() << endl;
}

//形参为Point类的函数（返回一个对象）
Point fun2() {
    Point a(1, 2);
    return a;
}

int Point::count;//静态数据成员的定义以及初始化

int main() {
    Point a(4, 5);
    Point::showCount();

    Point b = a;
    Point::showCount();
    a.getX();
    return 0;
}
