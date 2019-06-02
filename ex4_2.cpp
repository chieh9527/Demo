//
// Created by Chieh on 2019/5/29.
//

#include <iostream>
using namespace std;

class Point{//点类的定义
public:
    Point(int xx=0, int yy=0){//内敛构造函数
        x = xx;
        y = yy;
    }
    Point(Point &p);//复制构造函数(主要用于类之间使用等号传值)
    int getX() {
        return x;
    };
    int getY() {
        return y;
    };

private:
    int x, y;
};

//复制构造函数的实现
Point::Point(Point &p) {
    x = p.x;
    y = p.y;
}

//形参为Point类的函数(得到点的x坐标)
void fun1(Point p){
    cout<<p.getX()<<endl;
}
//形参为Point类的函数（返回一个对象）
Point fun2(){
    Point a(1, 2);
    return a;
}

int main()
{
    Point a(4, 5);
    Point b = a;
    cout<<b.getX()<<endl;
    fun1(b);
    b = fun2();
    return 0;
}
