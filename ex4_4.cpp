//
// Created by Chieh on 2019/5/29.
//

#include <iostream>
#include <cmath>
using namespace std;

class Point;//ǰ����������
class Line{//�������ࣨ����ࣩ
public:
    Line(Point xp1, Point xp2);
    Line(Line &p);
    double getLen(){ return len;};
private:
    Point p1, p2;
    double len;
};

//������ж���ĳ�ʼ������ǰ�����ĳ�ʼ��ʮ������
Line::Line(Line &l) : p1(l.p1), p2(l.p2) {
    cout<<"Calling the copy constructor of Line"<<endl;
    len = l.len;
}

//�����Ĺ��캯����ע����������е�˽�г�Ա����ʼ����
Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {
    cout<<"Calling constructor of Line"<<endl;
    double x = static_cast<double>(p1.getX()-p2.getX());
    double y = static_cast<double>(p1.getY()-p2.getY());
    len = sqrt(x*x + y*y);
}

class Point{//����Ķ���
public:
    Point(int xx=0, int yy=0){//�������캯��
        x = xx;
        y = yy;
    }
    Point(Point &p);//���ƹ��캯��(��Ҫ������֮��ʹ�õȺŴ�ֵ)
    int getX() {
        return x;
    };
    int getY() {
        return y;
    };

private:
    int x, y;
};
//���ƹ��캯����ʵ��
Point::Point(Point &p) {
    x = p.x;
    y = p.y;
    cout<<"Calling the copy constructor of Point"<<endl;
}
//�β�ΪPoint��ĺ���(�õ����x����)
void fun1(Point p){
    cout<<p.getX()<<endl;
}
//�β�ΪPoint��ĺ���������һ������
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
