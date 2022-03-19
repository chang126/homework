/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.19.2022
*/

#include <iostream>

using namespace std;

int main()
{
    char a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a==e&&b==d)
        cout<<"yes"<<endl;//是回文数
    else
        cout<<"no"<<endl;//不是回文数
    return 0;
}
