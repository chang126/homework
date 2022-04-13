/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:April.2.2022
*/
#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=7;j>=2*i-3;j--)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=2*i+1;j++)
            cout<<" ";
        for(int j=7;j>=2*i-1;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
