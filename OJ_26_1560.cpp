//´ò½´ÓÍ
// Created by Chieh on 2019/5/17.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin>>n)
    {
        int a, b, c;
        int sum = 0;
        a = n/50;
        b = (n%50)/30;
        c = (n%50)%30/10;
        sum = a * 7 + b * 4 + c;
        cout<<sum<<endl;
    }
}