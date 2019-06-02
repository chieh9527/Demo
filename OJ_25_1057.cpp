//
// Created by Chieh on 2019/5/17.
//

#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool init(string str){
//    ע�����ƥ�������ַ�
    regex re(R"(([+-]?\d+\.\d*)||([+-]?\d*\.\d+)||([+-]?\d+[eE][+-]?\d+)||([+-]?\d*\.\d+[eE][+-]?\d+))");
    bool b = regex_match(str,re);
    return b;
}

//
int main()
{
    int n;
    cin>>n;
    string str;
    for (int i = 0; i < n; ++i) {
        cin>>str;
        if(init(str)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    return 0;
}