/*
FileName:T2_26.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.12.2022
*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<"\n"<<endl;//method1
    int n,i,j;
    for(n=1;n<=4;n++)
    {
        for(i=1;i<=8;i++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        for(j=1;j<=8;j++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }//method2
    cout<<"\n";
    int x;
    for(x=1;x<=4;x++)
    {
        cout<<"* * * * * * * *"<<endl;
        cout<<" * * * * * * * *"<<endl;//method3
    }
    return 0;
}
