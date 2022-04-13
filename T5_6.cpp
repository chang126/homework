/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.26.2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a=0,i,s=0;
    double average;
    for( i=0;a!=9999;i++)
    {
        cin>>a;
        s+=a;
    }
    average=1.0*(s-9999)/(i-1);
    cout<<"average="<<average<<endl;
    return 0;
}
