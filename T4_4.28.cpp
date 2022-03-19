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
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=8;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        cout<<" ";
        for(int k=1;k<=8;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
