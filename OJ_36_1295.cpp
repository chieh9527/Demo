//
// Created by Chieh on 2019/5/25.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin>>n)
    {
        if (n > 4)
        {
            for (int i = n; i > 4; --i) {
                cout<<i<<","<<i+1<<"-->"<<2*i+1<<","<<2*i+2<<endl;
                cout<<2*i-1<<","<<2*i<<"-->"<<i<<","<<i+1<<endl;
            }
            n = 4;
        }
        if (n == 4) cout<<"4,5-->9,10\n8,9-->4,5\n2,3-->8,9\n7,8-->2,3\n1,2-->7,8\n";
    }
}