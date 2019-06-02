//
// Created by Chieh on 2019/5/29.
//

#include <iostream>
#include <cmath>
using namespace std;

class Point;//前向引用声明
class Line{//定义线类（组合类）
public:
    Line(Point xp1, Point xp2);
    Line(Line &p);
    double getLen(){ return len;};
private:
    Point p1, p2;
    double len;
};

//组合类中对象的初始化，和前面对象的初始化十分相似
Line::Line(Line &l) : p1(l.p1), p2(l.p2) {
    cout<<"Calling the copy constructor of Line"<<endl;
    len = l.len;
}

//组合类的构造函数（注意事项：将所有的私有成员都初始化）
Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {
    cout<<"Calling constructor of Line"<<endl;
    double x = static_cast<double>(p1.getX()-p2.getX());
    double y = static_cast<double>(p1.getY()-p2.getY());
    len = sqrt(x*x + y*y);
}

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
    cout<<"Calling the copy constructor of Point"<<endl;
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
    Point myp1(1, 1), myp2(4, 5);
    Line line(myp1, myp2);
    Line line2(line);
    cout<<"The length of the line is: "<<line.getLen()<<endl;
    cout<<"The length of the line2 is: "<<line2.getLen()<<endl;
    return 0;
}
