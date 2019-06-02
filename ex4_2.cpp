//
// Created by Chieh on 2019/5/29.
//

#include <iostream>
using namespace std;

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
    Point a(4, 5);
    Point b = a;
    cout<<b.getX()<<endl;
    fun1(b);
    b = fun2();
    return 0;
}
