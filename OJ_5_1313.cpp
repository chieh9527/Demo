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
            //�ж��ǲ��ǿո��ǵĻ���while����i++ִ���жϵ���һ���ո�ĳ��ֻ��ǽ���
            if(str[i]!=' ')
            {
                count++;
                while(str[i]!=' '&&str[i]!='\0')
//                ɾ������һ�������ᳬʱ
                {
                    i++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}