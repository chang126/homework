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
    char a,b,c,d;//加密后的数据
    int x,y;
    cin>>a>>b>>c>>d;
    x=a;y=b;
    a=c;b=d;
    c=x;d=y;
    char e,f,g,h;
    if(c<7)
    {
        e=c+3;
    }
    else
    {
        e=c-7;
    }
    if(d<7)
    {
        f=d+3;
    }
    else
    {
        f=d-7;
    }
    if(a<7)
    {
        g=a+3;
    }
    else
    {
        g=a-7;
    }
    if(b<7)
    {
        h=b+3;
    }
    else
    {
        h=b-7;
    }
    cout<<e<<f<<g<<h<<endl;//解出的密码
    return 0;
}
