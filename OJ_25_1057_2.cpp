//
// Created by Chieh on 2019/5/18.
//

#include <iostream>
#include <string>
using namespace std;

bool init(string str) {
    int len = str.length();
    bool point = false, E = false, flag = true;
    if (len == 1 && str[0] == '.') flag = false;
    for (int i = 0; i < len; i++) {
        if (point && str[i] == '.') flag = false;//����С����
        if (!point && str[i] == '.') point = true;//��һ�γ��ֵ�
        if (E && str[i] == '.') flag = false;//E������С����
        if ((i == 0 || i == len - 1) && (str[i] == 'e' || str[i] == 'E')) flag = false;//E����ǰ�����
        if (E && (str[i] == 'e' || str[i] == 'E')) flag = false;//���E
        if (!E && (str[i] == 'e' || str[i] == 'E')) E = true;//��һ�γ���E
        if ((str[i] == '+' || str[i] == '-') && i == len - 1) flag = false;//�Ӽ�����β
        if ((str[i]=='+' || str[i] == '-')&&i != len - 1 && (str[i + 1] < '0' || str[i + 1] > '9')) flag = false;//�Ӽ��ź�Ϊ����
        if ((str[i] == '+' || str[i] == '-') && i != 0 &&((str[i - 1] >= '0' && str[i - 1] <= '9') || str[i - 1] == '.'))   flag = false;
    }
    if(!point&&!E) flag=false;
    return flag;
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