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
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)
    {
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        {
            cout<<"yes"<<endl;//�ܹ���ֱ��������
        }
        else
        {
            cout<<"no"<<endl;//�ܹ��������Σ������ܹ���ֱ��������
        }
    }
    else
    {
        cout<<"no"<<endl;//���ܹ���������
    }
    return 0;
}
