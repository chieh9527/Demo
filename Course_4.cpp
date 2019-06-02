//
// Created by Chieh on 2019/5/14.
//

//#include <iostream>
//using namespace std;
//
//class Test
//{
//private:
//    int k;
//public:
//    static int n;
//    Test (int kk)
//    {	k=kk; n++; }
//    void Display( )
//    {	cout<<"n="<<n<<"  k="<<k<<endl; }
//};
//int Test::n=0;
//
//int main( )
//{	Test t1(10);
//    Test t2(20);
//    t1.Display( );
//    t2.Display( );
//    Test::n++;
//    t2.Display( );
//}


//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class point
//{	private:
//    double x,y;
//public:
//    point(double xx,double yy)
//    {	x=xx;  y=yy;  }
//    double get_x( )
//    {	return x;  }
//    double get_y( )
//    {	return y;  }
//    friend double distance(point p1, point p2)
//    {	return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)); }
//};
//
//int main( )
//{	point myp1(1,1),myp2(4,5);
//    cout<<"the distance is:"<<distance(myp1,myp2)<<endl;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Cat
//{		char names[10];
//public:
//    static int  HowManyCats;
//    static int GetHowMany( )
//    {	return HowManyCats;   }
//    Cat(char n[])
//    {	strcpy(names,n);HowManyCats++;  }
//};
//int Cat::HowManyCats=0;
//
//int main( )
//{	Cat c1("aaa"),c2("bbb");
//    cout<<"the number is:"<<Cat::GetHowMany( )<<endl;
//}


//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Student
//{		char names[10];
//    int math,computer;
//public:
//    void copy(char n[],int m,int c)
//    {	strcpy(names,n); math=m; computer=c; }
//    void display( )
//    {	cout<<names<<", "<<math<<",  "<<computer<<endl; }
//    friend void mysort(Student st[],int n);
//};
//void mysort(Student st[],int n)
//{	int i,j,m,c;
//    char name[10];
//    for (i=0; i<n-1; i++)
//        for (j=i; j<n; j++)
//            if (st[i].computer+st[i].math<st[j].computer+st[j].math)
//            {	strcpy(name,st[i].names); m=st[i].math; c=st[i].computer;
//                strcpy(st[i].names,st[j].names);st[i].math=st[j].math;
//                st[i].computer=st[j].computer;
//                strcpy(st[j].names,name); st[j].math=m; st[j].computer=c;
//            }
//}
//
//int main( )
//{	int n,i,m,c;
//    char name[10];
//    Student st1[10];
//    cin>>n;
//    for (i=0; i<n;i++)
//    {	cin>>name>>m>>c;
//        st1[i].copy(name,m,c);
//    }
//    cout<<"before sort:"<<endl;
//    for(i=0;i<n;i++)
//        st1[i].display( );
//    mysort(st1,n);
//    cout<<"after sort:"<<endl;
//    for(i=0;i<n;i++)
//        st1[i].display( );
//}
