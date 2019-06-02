//
// Created by Chieh on 2019/4/12.
//https://blog.csdn.net/abc5382334/article/details/26773539


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while (getline(cin,str))
    {
        int count = 0,length = str.length(),max = 0,min = 500;
        for (int i=0;i<length;i++)
        {
            //判断是不是空格不是的话在while里面i++执行判断到下一个空格的出现或是结束
            if(str[i]!=' ')
            {
                count++;
                while(str[i]!=' '&&str[i]!='\0')
//                删掉后面一个条件会超时
                {
                    i++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}