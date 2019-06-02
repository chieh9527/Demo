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
        if (point && str[i] == '.') flag = false;//两个小数点
        if (!point && str[i] == '.') point = true;//第一次出现点
        if (E && str[i] == '.') flag = false;//E后面有小数点
        if ((i == 0 || i == len - 1) && (str[i] == 'e' || str[i] == 'E')) flag = false;//E在最前或最后
        if (E && (str[i] == 'e' || str[i] == 'E')) flag = false;//多个E
        if (!E && (str[i] == 'e' || str[i] == 'E')) E = true;//第一次出现E
        if ((str[i] == '+' || str[i] == '-') && i == len - 1) flag = false;//加减号在尾
        if ((str[i]=='+' || str[i] == '-')&&i != len - 1 && (str[i + 1] < '0' || str[i + 1] > '9')) flag = false;//加减号后不为数字
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