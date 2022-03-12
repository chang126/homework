/*
FileName:T2_25.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.12.2022
*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"Input two integers"<<endl;
    int a,b;
    cin>>a>>b;
    if(a%b==0)
        cout<<"yes"<<endl;//a是b的倍数
    else
        cout<<"no"<<endl;//a不是b的倍数
    return 0;
}
