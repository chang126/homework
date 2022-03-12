/*
FileName:T2_18.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.11.2022
Function:Compare the size of two numbers
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Input two integers"<<endl;//由用户输入两个整数
    cin>>a>>b;
    if(a==b)
        cout<<"These numbers are equal"<<endl;
    else
    {
        if(a>b)
            cout<<a<<" is large"<<endl;
        else
            cout<<b<<" is large"<<endl;
    }
    return 0;
}
