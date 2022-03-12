/*
FileName:T2_21.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.12.2022
Function:Judge the smallest and largest
*/
#include <iostream>

using namespace std;

int main()
{
    cout <<"Input five integers"<< endl;
    int a,b,c,d,e,min,max;
    cin>>a>>b>>c>>d>>e;
    if(a<b&&b<c)
        min=a;max=c;
    if(a<c&&c<b)
        min=a;max=b;
    if(b<a&&a<c)
        min=b;max=c;
    if(b<c&&c<a)
        min=b;max=a;
    if(c<b&&b<a)
        min=c;max=a;
    if(c<a&&a<b)
        min=c;max=b;
    if(d<e)
    {
       if(d>=max)
       cout<<"smallest="<<min<<"\n"<<"largest="<<e;
       if(e<=min)
       cout<<"smallest="<<d<<"\n"<<"largest="<<max;
       if(d<min&&max<e)
        cout<<"smallest="<<d<<"\n"<<"largest="<<e;
       if(min<d&&e<max)
        cout<<"smallest="<<min<<"\n"<<"largest="<<max;
    }
    else
    {
       if(e>=max)
       cout<<"smallest="<<min<<"\n"<<"largest="<<d;
       if(d<=min)
       cout<<"smallest="<<e<<"\n"<<"largest="<<max;
       if(e<min&&max<d)
        cout<<"smallest="<<e<<"\n"<<"largest="<<d;
       if(min<e&&d<max)
        cout<<"smallest="<<min<<"\n"<<"largest="<<max;
    }
    return 0;
}
