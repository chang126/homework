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
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&b+c>a&&a+c>b)
        cout<<"yes"<<endl;//能构成三角形
    else
        cout<<"no"<<endl;//不能构成三角形
    return 0;
}
