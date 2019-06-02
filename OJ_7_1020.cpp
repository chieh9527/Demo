//
// Created by Chieh on 2019/4/12.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while (getline(cin,str))
    {
        int count = 0,length = str.length(), p ,p_max , p_min , max = 0, min = 500;
        for (int i=0;i<length;i++)
        {
//            用空格区分单词
            if(str[i]!=' ')
            {
                p = i;
                count = 0;
//                删掉后面一个条件会超时
                while(str[i]!=' '&&str[i]!='\0')
                {
                    count++;
                    i++;
                }
//                存放单词的位置
                if (count > max)
                {
                    p_max = p;
                    max = count;
                }
                if (count < min)
                {
                    p_min = p;
                    min = count;
                }
            }
        }
        for (int i=0;i<length;i++)
        {
            if(i == p_max)
            {
                while(str[i]!=' '&&str[i]!='\0')
                {
                    cout<<str[i];
                    i++;
                }
                cout<<endl;
            }
         }
        for (int i=0;i<length;i++)
        {
            if(i == p_min)
            {
                while(str[i]!=' '&&str[i]!='\0')
                {
                    cout<<str[i];
                    i++;
                }
                cout<<endl;
            }
        }
     }
}