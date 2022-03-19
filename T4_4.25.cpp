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
    int a;
    cin>>a;
    if(a>20)
        return 0;
    for(int i=1;i<=a;i++)
    {
       cout<<"*";
    }
    cout<<"\n";
    for(int j=1;j<=a-2;j++)
    {
        cout<<"*";
        for(int k=1;k<=a-2;k++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(int i=1;i<=a;i++)
    {
       cout<<"*";
    }
    return 0;
}
